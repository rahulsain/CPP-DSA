#include <iostream>
using namespace std;

class node
{

public:
    int data;
    node *next;
    node(int x)
    {
        data = x;
        next = NULL;
    }
};
class queue
{
private:
    node *front;
    node *rear;

public:
    queue()
    {
        front = NULL;
        rear = NULL;
    }

    void push(int x)
    {
        node *temp = new node(x);
        if (front == NULL)
        {
            front = temp;
            rear = temp;
            return;
        }
        rear->next = temp;
        rear = temp;
    }
    void pop()
    {
        if (front == NULL)
        {
            return;
        }
        node *temp = front;
        front = front->next;
        if (front == NULL)
        {
            rear == NULL;
        }

        delete (temp);
    }

    void display()
    {
        if (front == NULL || rear == NULL)
        {
            cout << "Queue Empty" << endl;
        }
        else
        {
            cout << "Values are : " << endl;
            node *temp = front;
            while (temp != NULL)
            {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
    }
};
int main()
{
    queue s;
    s.push(1);
    s.push(4);
    s.display();
    s.push(5);
    s.push(6);
    s.push(2);
    s.display();
    s.push(3);
    s.pop();
    s.display();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.display();
}