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
    ll.reverseLLIterative();
    ll.print();
    return 0;
}