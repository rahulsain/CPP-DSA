#include <iostream>
#include <queue>
using namespace std;
void reverse(queue<int> &q)
{
    if (q.empty())
    {
        return;
    }
    int x = q.front();
    q.pop();
    reverse(q);
    q.push(x);
}
void print(queue<int> q1)
{
    while (q1.empty() == false)
    {
        cout << q1.front() << " ";
        q1.pop();
    }
    cout << endl;
}
int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    print(q);
    reverse(q);
    print(q);
}