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
    ll.insertAtBeginning(10);
    ll.insertAtBeginning(20);
    ll.print();
}