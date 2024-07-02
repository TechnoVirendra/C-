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
    ll.insertAtEnd(30);
    ll.insertAtEnd(40);
    ll.print();
}