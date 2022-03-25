#include<bits/stdc++.h>
using namespace std;

struct Queue {
    stack<int>s1,s2;
    void enQueue(int x)
    {
        s1.push(x);
    }
    int deQueue()
    {
        if (s1.empty() && s2.empty()) {
            cout << "Q is empty\n";
            exit(0);
        }
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }

        int x = s2.top();
        s2.pop();
        return x;
    }
};

int main()
{
    int n,p;
    cin>>n;
    Queue q;
    cout<<"Enter the data "<<n<<" times\n";
    for(int i=0;i<n;i++)
    {
    cin>>p;

    q.enQueue(p);
    }

cout<<"Inserted dat is\n";
for(int i=0;i<n;i++)
{
    cout<<q.deQueue()<<"\n";
}

    return 0;
}
