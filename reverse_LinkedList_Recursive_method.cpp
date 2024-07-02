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
    ll.reverseLLRecursive();
    ll.print();
    return 0;
}