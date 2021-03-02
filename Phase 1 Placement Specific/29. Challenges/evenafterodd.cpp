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

void evenAfterOdd(node* &head){
    node* odd = head;
    node* even = head -> next;
    node* evenStart = even;
    while(odd->next!= NULL && even -> next != NULL){
        odd ->next = even -> next;
        odd = odd -> next;
        even -> next = odd -> next;
        even = even -> next;
    }
    if(odd -> next != NULL){ // this is working for odd no of nodes
        even -> next = NULL;
    }
    odd -> next = evenStart;
}

int main(){

    node* head = NULL;
    for(int i = 0; i< 7; i++){
        insertAtTail(head,i+1);
    }
    display(head);
    evenAfterOdd(head);
    display(head);
    return 0;
}