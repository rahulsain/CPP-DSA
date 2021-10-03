#include <iostream>
using namespace std;

class queue
{
private:
    int front, rear;
    int arr[5];

public:
    queue()
    {
        front = -1;
        rear = -1;
        for (int i = 0; i < 5; i++)
        {
            arr[i] = 0;
        }
    }
    bool isempty()
    {
        if (front == -1 && rear == -1)
        {
            return true;
        }
        else
            return false;
    }
    bool isfull()
    {
        if (rear == 4)
        {
            return true;
        }
        else
            return false;
    }
    void enqueue(int val)
    {
        if (isfull())
        {
            cout << "Queue is overloaded" << endl;
            return;
        }
        else if (isempty())
        {
            rear = 0;
            front = 0;
            arr[rear] = val;
        }
        else
        {
            rear++;
            arr[rear] = val;
        }
    }
    int dequeue()
    {
        int x = 0;
        if (isempty())
        {
            cout << "Queue is empty" << endl;
            return 0;
        }
        else if (front == rear)
        {
            x = arr[front];
            arr[front] = 0;
            front = -1;
            rear = -1;
            return x;
        }
        else
        {
            x = arr[front];
            arr[front] = 0;
            front++;
            return x;
        }
    }
    int count()
    {
        return (rear - front + 1);
    }

    void print()
    {
        cout << "All the values of the queue are -> " << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    queue s;
    s.enqueue(1);
    s.enqueue(4);
    s.print();
    s.enqueue(5);
    s.enqueue(6);
    cout << "The count is : " << s.count() << endl;
    s.enqueue(2);
    s.print();
    cout << "The count is : " << s.count() << endl;
    s.enqueue(3);
    s.dequeue();
    s.print();
    s.dequeue();
    s.dequeue();
    s.dequeue();
    s.dequeue();
    s.dequeue();
}