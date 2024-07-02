#include<bits/stdc++.h>
using namespace std;

class CircularQueue
{
    int *arr;
    int size;
    int front;
    int rear;
    int max_size;
    public:
        CircularQueue(int default_size = 10)
        {
            arr = new int[default_size];
            size = 0;
            front = -1;
            rear = -1;
            max_size = default_size;
            for(int i=0 ;i<max_size; i++)
                arr[i] = -1;
        }

        void enqueue(int d)
        {
            if(full())
            {
                cout<<"Queue Overflow !\n";
                return;
            }
            else
            {
                if(empty())
                {
                    front = 0;
                    rear = 0;
                    arr[rear] = d;
                }
                else
                {
                    arr[rear] = d;
                }
                rear = (rear+1) % max_size;
            }
            size++;
        }

        void dequeue()
        {
            if(empty())
            {
                cout<<"Queue Underflow !\n";
                return;
            }
            else
            {
                arr[front] = -1;
                front = (front+1) % max_size;
                if(front == rear)
                {
                    front = -1;
                    rear = -1;
                }

            }
            size--;
        }

        bool empty()
        {
            return (front == -1 && rear == -1);
        }

        bool full()
        {
            return (rear != -1 && rear == front);
        }

        int GetFront()
        {
            if(empty())
            {
                cout<<"Queue Underflow !\n";
                return -1;
            }
            else
            {
                return arr[front];
            }
        }

        int GetRear()
        {
            if(empty())
            {
                cout<<"Queue Overflow !\n";
                return -1;
            }
            else
            {
                return arr[(rear - 1 +max_size) % max_size];
            }
        }
        int Getsize()
        {
            return size;
        }
        int Getmaxsize()
        {
            return max_size;
        }

        void print()
        {
            if(empty())
            {
                cout<<"List is empty \n";
                return;
            }
            else
            {
                for(int i = 0;i<max_size; i++)
                {
                    cout<<arr[i]<<" ";
                }
                cout<<endl;
            }
        }
};

int main()
{
    CircularQueue cq = CircularQueue(5);
    cq.enqueue(10);
    cq.enqueue(20);
    cq.enqueue(30);
    cq.print();
    cq.dequeue();
    cq.dequeue();
    cq.enqueue(40);
    cq.enqueue(50);
    cq.enqueue(60);
    cq.print();
    cq.dequeue();
    cq.dequeue();
    cq.dequeue();
    cq.dequeue();
    cq.dequeue();
    return 0;
}