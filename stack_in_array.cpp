#include<bits/stdc++.h>
using namespace std;

class Stack
{
    int *arr;
    int max_size;
    int top;
    public:
        Stack(int size = 10)
        {
            arr = new int(size);
            max_size = size;
            top = -1;
        }

        bool full()
        {
            return (top + 1) == max_size;
        }

        bool empty()
        {
            return top == -1;
        }

        void push(int data)
        {
            if(full())
            {
                cout<<"Stack Overflow !!! \n";
                return;
            }
            else
            {
                top++;
                arr[top] = data;
            }
        }

        void pop()
        {
            if(empty())
            {
                cout<<"Stack Underflow !!! \n";
                return;
            }
            else
            {
                top--;
            }
        }

        int getTop()
        {
            if(empty())
            {
                cout<<"Stack Underflow !!! \n";
                return -1;
            }
            else
            {
                return arr[top];
            }
        }

        int GetSize()
        {
            return top + 1;
        }

        int GetMaxSize()
        {
            return max_size;
        }

        void print()
        {
            cout<<endl;
            for(int i=0;i < max_size;i++)
                cout<<arr[i]<<" ";
            cout<<"\n";
        }
};

int main()
{
    Stack st = Stack(5);
    st.pop();
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    cout<<st.getTop()<<"\n";
    st.pop();
    st.pop();
    st.pop();
    cout<<st.getTop()<<endl;
    cout<<st.GetSize()<<endl;
    cout<<st.GetMaxSize()<<endl;
    st.print();
}