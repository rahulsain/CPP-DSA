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

node* lastnodes(node* &head,int k){
    int length =0;
    node* temp = head;
    while(temp->next != NULL){
        temp = temp ->next;
        length++;
    }
    node* last = temp;
    k = k%length;
    int pos = length - k;
    int count = 0;
    temp = head;
    while(temp != NULL && count < pos){
        temp = temp ->next;
        count++;
    }
    node* lastNode = temp;
    node* startNode = temp ->next;
    last ->next = head;
    lastNode -> next = NULL;
    return startNode;
}

int main(){

    node* head = NULL;
    int arr[] = {11,12,13,14,15,16,17,18,25,33,35,46};
    for(int i = 0; i< *(&arr + 1) - arr; i++){
        insertAtTail(head,arr[i]);
    }
    // display(head);
    node* updated = lastnodes(head,4);
    display(updated);
    return 0;
}