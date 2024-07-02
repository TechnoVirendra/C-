#include<bits/stdc++.h>
using namespace std;

class Stack
{
    struct Node
    {
        int data;
        Node *next;
        Node(int d)
        {
            data = d;
            next = NULL;
        }
    };
    Node *head;
    int size;

    public:
        Stack()
        {
            head = NULL;
            size = 0;
        }

        bool empty()
        {
            return head == NULL;
        }

        void push(int data)
        {
            Node *newhead = new Node(data);
            if(empty())
            {
                head = newhead;
                
            }
            else
            {
                newhead->next = head;
                head = newhead;
            }
            size++;
        }

        void pop()
        {
            if(empty())
            {
                cout<<"Stack Underflow !!!\n";
                return;
            }
            else
            {
                Node *Todelete = head;
                head = head->next;
                free(Todelete);
                size--;
            }
        }

        int TOP()
        {
            if(empty())
            {
                cout<<"Stack UnderFlow !!!!\n";
                return -1;
            }
            else
            {
                return head->data;
            }
        }

        int Getsize()
        {
            return size;
        }

        void print()
        {
            if(empty())
            {
                cout<<"Stack is Empty !!!!\n";
                return;
            }
            else
            {
                Node *current = head;
                cout<<"Top to Bottom :  ";
                while(current != NULL)
                {
                    cout<<current->data<<"  ";
                    current = current->next;
                }
                cout<<endl;
            }
        }
};

void balanceBrackets()
{
    stack<char> st;
    string s;
    cin>>s;
    int i =0;
    while(i < s.length())
    {
        if(s[i]=='(' || s[i] == '[' || s[i] == '{' || s[i] == '<')
        {
            st.push(s[i]);
        }
        else
        {
            if(st.empty())
            {
                cout<<"Invalid Sequence !!! \n";
                return;
            }
            if((st.top() == '(' && s[i] == ')')||(st.top() == '[' && s[i] == ']') ||
            (st.top() == '{' && s[i] == '}') ||(st.top() == '<' && s[i] == '>'))
            {
                st.pop();
            }
            else
            {
                cout<<"Invalid Sequence "<<endl;
                return;
            }
        }
        i++;
    }
    if(st.empty())
    {
        cout<<"Valid Sequqnce !!!\n";
        
    }
    else
    {
        cout<<"Invalid Sequence !!! \n";
    }
}

int main()
{
    balanceBrackets();
    return 0;
}