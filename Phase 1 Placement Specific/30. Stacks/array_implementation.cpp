#include <bits/stdc++.h>

using namespace std;

# define n 100

class Stack{
    int top;
    int* arr;
    public:
    Stack(){
        arr = new int [n];
        top = -1;
    }
    void push(int data){
        if(top == n-1){
            cout<<"Stack is overflow"<<endl;
            return;
        }
        top++;
        arr[top] = data;
    }
    void pop(){
        if(top == -1){
            cout<<"Stack is underflow"<<endl;
            return;
        }
        cout<<arr[top]<<endl;
        top--;
    }

    int Top(){
        if(top == -1){
            cout<<"No element is Stack"<<endl;
            return -1;
        }
        return arr[top];
    }
    bool empty(){
        return top == -1;
    }
};

int main(){

    Stack s;
    s.push(1);    
    s.push(2);
    s.push(3);
    s.pop();
    cout<<s.Top()<<endl;
    s.pop();
    s.pop();
    s.pop();
    cout<<s.empty();
    return 0;
}