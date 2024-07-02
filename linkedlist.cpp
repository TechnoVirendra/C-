#include<bits/stdc++.h>
using namespace std;

class LinkedList
{
    struct Node
    {
        int data;
        Node *next;
        Node(int d){
            data = d;
            next = NULL;
        }
    };
    Node *head, *tail;
    public:
        LinkedList()
        {
            head =NULL;
            tail = NULL;
        }

        void insertAtBeginning(int data)
        {
            Node *newNode = new Node(data);
            if(head == NULL)
            {
                head = newNode;
                tail = newNode;
            }
            else
            {
                newNode ->next = head;
                head = newNode;
            }
        }

        void insertAtEnd(int data)
        {
            Node *newNode = new Node(data);
            if(empty())
            {
                head = newNode;
                tail = head;
            }
            else
            {
                tail ->next =newNode;
                tail = tail->next;
                /*
                Node *current = head;
                while(current->next != NULL)
                {
                    current = current->next;
                }
                current->next = newNode;
                */
            }
        }

        void insertAtKPosition(int k, int data)
        {
            if(k<0)
            {
                cout<<"Invalid Position"<<endl;
                return;
            }
            if(empty())
            {
                cout<<"List is Empty !!!\n";
                return;
            }

            Node *newNode = new Node(data);

            if(k == 0)
            {
                newNode->next = head;
                head = newNode;
                return;
            }
            else
            {
                Node * current = head;
                while(current != NULL && --k)
                {
                    current = current->next;
                }
                if(k == 0)
                {
                    newNode->next = current->next;
                    current->next = newNode;
                }
                else
                {
                    cout<<"Position does not exist !!!\n";
                }
            }


        }

        void deleteNode(int dataToDel)
        {
            Node *current = head;
            if(empty())
            {
                cout<<"List is Empty !!!\n";
                return;
            }
            else if(head->data == dataToDel)
            {
                head = head->next;
                free(current);
                return;
            }
            else
            {
                while(current->next !=NULL && current->next->data != dataToDel)
                {
                    current = current->next;
                }
                if(current->next == NULL)
                {
                    cout<<"Data does not exist !!!\n";
                }
                else
                {
                    Node *nodeToDel = current->next;
                    current->next = current->next->next;
                    free(nodeToDel);
                }
            }
        }

        void reverseLLIterative()
        {
            Node *previous = NULL, *current = head, *next = NULL;
            while(current != NULL)
            {
                next = current->next;
                current->next = previous;
                previous = current;
                current = next;
            }
            head = previous;
        }

        Node *reverseLLIterativeutil(Node *previous, Node * current)
        {
            if(current != NULL)
            {
                Node *head = reverseLLIterativeutil(current, current->next);
                current->next = previous;
                return head;
            }
            else
            {
                return previous;
            }
        }

        Node* reverseLLRecursiveutil(Node *previous, Node *current)
        {
            if(current != NULL)
            {
                Node *head = reverseLLRecursiveutil(current , current->next);
                current->next = previous;
                return head;
            }
            else
            {
                return previous;
            }
        }

        Node *reverseLLRecursiveutil2(Node *previous, Node * current)
        {
            if(current != NULL)
            {
                Node *next = current->next;
                current->next =previous;
                Node * head = reverseLLRecursiveutil2(current,next);
                return head;
            }
            else
            {
                return previous;
            }
        }

        void reverseLLRecursive()
        {
            head = reverseLLRecursiveutil2(NULL,head);
        }

        void print()
        {
            if(empty()){
                cout<<"List is Empty !!!\n";
                return;
            }
            else
            {
                Node *current =head;
                while (current != NULL)
                {
                    cout<< current->data <<"->";
                    current = current->next;
                }
                cout<<"NULL"<<endl;
                
            }
        }

        bool empty()
        {
            return head == NULL;
        }
};

int main(){
    LinkedList ll = LinkedList();
    ll.insertAtBeginning(20);
    ll.insertAtBeginning(10);
    ll.print();
    ll.insertAtEnd(40);
    ll.insertAtEnd(50);
    ll.print();
    ll.insertAtKPosition(2,30);
    ll.print();
    ll.deleteNode(40);
    ll.print();
    ll.reverseLLIterative();
    ll.print();
    ll.reverseLLRecursive();
    ll.print();
    return 0;
}