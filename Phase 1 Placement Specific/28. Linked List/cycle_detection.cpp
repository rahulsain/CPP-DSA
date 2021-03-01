#include <bits/stdc++.h>

using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtHead(node* &head,int data){
    node* temp = new node(data);
    temp->next = head;
    head = temp;
}

void insertAtTail(node* &head,int data){
    node* temp1 = new node(data);
    if(head == NULL){
        head = temp1;
        return;
    }
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = temp1;
}

void display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

void makeCycle(node* &head,int pos){
    node* temp = head;
    node* startNode;
    int count = 1;
    while(temp -> next != NULL){
        if(count == pos){
            startNode = temp;
        }
        temp = temp ->next;
        count++;
    }
    temp ->next = startNode;
}

bool detectCycle(node* &head){
    node* slow = head;
    node* fast = head;
    while(fast != NULL && fast ->next != NULL){
        slow = slow -> next;
        fast = fast ->next ->next;
        if(slow == fast){
            return true;
        } 
    }
    return false;
}

void removeCycle(node* &head){
    node* slow = head;
    node* fast = head;
    do{
        slow = slow -> next;
        fast = fast ->next ->next;
    }while(slow != fast);

    fast = head;

    while(fast ->next != slow -> next){
        slow = slow -> next;
        fast = fast -> next;
    }
    slow ->next = NULL;
}

int main(){
    node* n1 = NULL;        
    insertAtTail(n1,11);
    insertAtTail(n1,12);
    insertAtTail(n1,13);
    insertAtHead(n1,14);
    insertAtHead(n1,15);
    makeCycle(n1,2);
    // display(n1);
    cout<<detectCycle(n1)<<endl;
    removeCycle(n1);
    cout<<detectCycle(n1)<<endl;
    display(n1);
    return 0;
}