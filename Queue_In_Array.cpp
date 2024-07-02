#include<bits/stdc++.h>
using namespace std;

class Queue
{
    int *arr;
    int front;
    int back;
    int max_size;
    public:
        Queue(int default_size = 10)
        {
            arr = new int[default_size];
            max_size = default_size;
            front = -1;
            back = -1;
        }

        bool empty()
        {
            return front == -1;
        }

        bool full()
        {
            return back == max_size;
        }

        void enqueue(int d)
        {
            if(full())
            {
                cout<<"Queue Overflow !!! \n ";
                return;
            }
            else
            {
                if(front == -1)
                {
                    front = 0;
                    back = 0;
                    arr[back] = d;
                }
                else
                {
                    arr[back] = d; 
                }
                back++;
            }
        }

        void dequeue()
        {
            if(empty())
            {
                cout<<"Queue Underflow !!!\n";
                return;
            }
            else
            {
                arr[front] = -1;
                front++;
                if(front == back)
                {
                    front = -1;
                    back = -1;
                }
            }
        }
        int getFront()
        {
            if(empty())
            {
                cout<<"Queue underflow !!!\n";
                return -1;
            }
            else
            {
                return arr[front];
            }
        }

        int getBack()
        {
            if(empty())
            {
                cout<<"Queue underflow !!!\n";
                return -1;
            }
            else
            {
                return arr[back-1];
            }
        }
// O(1) time
        void print()
        {
            if(empty())
            {
                cout<<"Queue Underflow !!!\n";
                return;
            }
            int i = 0;
            while(i < max_size)
            {
                cout<<arr[i]<<" ";
                i++;
            }
            cout<<endl;
        }
};

int main()
{
    Queue q;
    q.enqueue(10);
    q.dequeue();
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(10);
    cout<<q.getFront();
    cout<<"\n"<<q.getBack();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    return 0;

}
