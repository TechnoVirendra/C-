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
    ll.deleteNode(40);
    ll.print();
    return 0;
}