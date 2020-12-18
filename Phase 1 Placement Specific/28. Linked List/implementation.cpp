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
    if(head == NULL){
        insertAtHead(head,data);
        return;
    }
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = temp;
}

void display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
//try implementing binary search, if possible
bool linearSearch(node* head,int key){
    node* temp = head;
    while(temp != NULL){
        if(temp->data == key){
            return true;
        }
        temp = temp->next;
    }
    return false;
}

int main(){
    node* n1 = NULL;        
    insertAtTail(n1,11);
    insertAtTail(n1,12);
    insertAtTail(n1,13);
    display(n1);
    insertAtHead(n1,14);
    insertAtHead(n1,15);
    display(n1);
    cout<<linearSearch(n1,13);
    return 0;
}