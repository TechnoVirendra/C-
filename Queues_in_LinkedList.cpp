#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int data;
        Node * next;

        Node(int d)
        {
            data = d;
            next = NULL;
        }
};

class Queue
{
    Node * front;
    Node * back;
    public:
        Queue()
        {
            front = NULL;
            back =NULL;
        }

        void Push(int d)
        {
            Node * n = new Node(d);

            if(front == NULL)
            {
                back = n;
                front = n;
                return;
            }

            back->next = n;
            back = n;
        }

        void pop()
        {
            if(front == NULL)
            {
                cout<<"Queue is Empty !!\n";
                return;
            }
            
            Node * Todelete = front;
            front = front->next;
            delete Todelete;
        }

        int peek()
        {
            if(front == NULL)
            {
                cout<<"No any element in Queue !!!\n";
                return -1;
            }
            return front->data;
        }  

        bool empty()
        {
            if(front == NULL)
            {
                return true;
            }
            return false;
        }      
};

int main()
{
    Queue q;
    q.Push(10);
    q.Push(20);
    q.Push(30);
    q.Push(40);
    q.Push(50);
    
    cout<<q.peek()<<"\n";
    q.pop();
    cout<<q.peek()<<"\n";
    q.pop();
    cout<<q.peek()<<"\n";
    q.pop();
    cout<<q.peek()<<"\n";
    q.pop();
    cout<<q.peek()<<"\n";
    q.pop();

    cout<<"Queue is empty [1 - Yes or 0 - No] : "<<q.empty()<<endl;
}