#include <bits/stdc++.h>
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
        Node *newHead = new Node(data);
        if (empty())
        {
            head = newHead;
        }
        else
        {
            newHead->next = head;
            head = newHead;
        }
        size += 1;
    }

    void pop()
    {
        if (empty())
        {
            cout << "Stack Underflow" << endl;
            return;
        }
        else
        {
            Node *toDelete = head;
            head = head->next;
            free(toDelete);
            size -= 1;
        }
    }

    int top()
    {
        if (empty())
        {
            cout << "Stack Underflow" << endl;
            return -1;
        }
        else
        {
            return head->data;
        }
    }

    int getSize()
    {
        return size;
    }

    void print()
    {
        if (empty())
        {
            cout << "Stack is empty" << endl;
            return;
        }
        else
        {
            Node *current = head;
            cout << "Top to bottom: ";
            while (current != NULL)
            {
                cout << current->data << " ";
                current = current->next;
            }
            cout << endl;
        }
    }
};

void balancingBrackets1()
{
    string s;
    cin >> s;
    int i = 0, count = 0;
    while (i < s.length())
    {
        if (s[i] == '(')
            count++;
        else if (s[i] == ')')
            count--;

        if (count < 0)
        {
            cout << "Invalid Sequence" << endl;
            return;
        }

        i++;
    }
    if (count == 0)
    {
        cout << "Valid Sequence" << endl;
    }
    else
    {
        cout << "Invalid Sequence" << endl;
    }
    return;
}

void balancingBranckets2()
{
    stack<char> st;
    string s;
    cin >> s;
    int i = 0;
    while (i < s.length())
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{' || s[i] == '<')
        {
            st.push(s[i]);
        }
        else
        {
            if (st.empty())
            {
                cout << "Invalid Sequence" << endl;
                return;
            }
            else if ((st.top() == '(' && s[i] == ')') ||
                     (st.top() == '[' && s[i] == ']') ||
                     (st.top() == '{' && s[i] == '}') ||
                     (st.top() == '<' && s[i] == '>'))
            {
                st.pop();
            }
            else
            {
                cout << "Invalid Sequence" << endl;
                return;
            }
        }
        i++;
    }
    if (st.empty())
    {
        cout << "Valid Sequence" << endl;
    }
    else
    {
        cout << "Invalid Sequence" << endl;
    }
}

void removeDuplicates()
{
    string s;
    cin >> s;

    stack<char> st;
    int i = 0;

    while (i < s.length())
    {
        if (st.empty())
        {
            st.push(s[i]);
        }
        else
        {
            if (st.top() == s[i])
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }
        i++;
    }

    s = "";
    while (!st.empty())
    {
        s = st.top() + s;
        st.pop();
    }
    cout << s << endl;
}

void removeDuplicates2()
{
    string s;
    cin >> s;
    int k;
    cin >> k;

    stack<pair<char, int>> st;
    pair<char, int> t;

    int i = 0;
    while (i < s.length())
    {
        if (st.empty())
        {
            st.push({s[i], 1});
        }
        else
        {
            if (st.top().first == s[i])
            {
                if (st.top().second == (k - 1))
                {
                    for (int j = 0; j < k - 1; j++)
                        st.pop();
                }
                else
                {
                    st.push({s[i], st.top().second + 1});
                }
            }
            else
            {
                st.push({s[i], 1});
            }
        }
        i++;
    }

    s = "";
    while (!st.empty())
    {
        s = st.top().first + s;
        st.pop();
    }
    cout << s;
}


class TwoStack
{
    int *arr;
    int top1;
    int top2;
    int size1;
    int size2;
    int maxsize;

public:
    TwoStack(int size = 10)
    {
        maxsize = size;
        top1 = -1;
        top2 = size;
        size1 = 0;
        size2 = 0;
        arr = new int[maxsize];
    }
    bool full()
    {
        return top1 + 1 == top2;
    }
    void push1(int data)
    {
        if (full())
        {
            cout << "Overflow" << endl;
            return;
        }
        else
        {
            top1++;
            arr[top1] = data;
            size1++;
        }
    }
    void pop1()
    {
        if (empty1())
        {
            cout << "Underflow" << endl;
            return;
        }
        else
        {
            top1--;
            size1--;
        }
    }
    void push2(int data)
    {
        if (full())
        {
            cout << "Overflow" << endl;
            return;
        }
        else
        {
            top2--;
            arr[top2] = data;
            size2++;
        }
    }
    void pop2()
    {
        if (empty2())
        {
            cout << "Underflow" << endl;
            return;
        }
        else
        {
            top2++;
            size2--;
        }
    }
    int getTop1()
    {
        if (empty1())
        {
            cout << "Underflow" << endl;
            return -1;
        }
        else
        {
            return arr[top1];
        }
    }

    int getTop2()
    {
        if (empty2())
        {
            cout << "Underflow" << endl;
            return -1;
        }
        else
        {
            return arr[top2];
        }
    }
    bool empty1()
    {
        return top1 == -1;
    }
    bool empty2()
    {
        return top2 == maxsize;
    }
    int getSize1()
    {
        return size1;
    }
    int getSize2()
    {
        return size2;
    }
    void print()
    {
        if (empty1() && empty2())
        {
            cout << "Stack is empty" << endl;
            return;
        }
        else
        {
            cout << "Stack: ";
            for (int i = 0; i < maxsize; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    removeDuplicates2();
}


class Kstacks
{
    int *arr;
    int *next;
    int *top;
    int n, k;
    int free;

public:
    Kstacks(int kV, int nV)
    {
        k = kV, n = nV;
        arr = new int[n];
        next = new int[n];
        top = new int[k];
        free = 0;

        for (int i = 0; i < k; i++)
            top[i] = -1;

        for (int i = 0; i < n; i++)
            next[i] = i + 1;
        next[n - 1] = -1;
    }
    bool full()
    {
        return free == -1;
    }

    bool empty(int sn)
    {
        return top[sn] == -1;
    }

    void push(int data, int sn)
    {
        if (full())
        {
            cout << "Stack Overflow" << endl;
            return;
        }

        int i = free;
        arr[i] = data;
        free = next[i];
        next[i] = top[sn];
        top[sn] = i;
    }
    int pop(int sn)
    {
        if (empty(sn))
        {
            cout << "Stack Underflow" << endl;
            return -1;
        }

        int i = top[sn];
        int data = arr[i];
        top[sn] = next[i];
        next[i] = free;
        free = i;
        
        return data;
    }
};