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

    ll.insertAtKPosition(0,30);
    ll.print();
    return 0;
}