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

void deleteAtHead(node* &head){
    node* todelete = head;
    head = head->next;
    delete todelete;
}

void deleteAtTail(node* &head,int val){
    if(head == NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    else if(head->next == NULL){
        cout<<"List is now empty"<<endl;
        deleteAtHead(head);
        return;
    }
    node* temp = head;
    while(temp->next->data != val){
        temp = temp ->next;
    }
    node* todelete = temp -> next;
    temp -> next = temp -> next -> next;
    delete todelete;
}

node* reverse(node* &head) {
    node* prevptr = NULL;
    node* curptr = head;
    node* nextptr;
    while(curptr != NULL){
        nextptr = curptr ->next;
        curptr -> next = prevptr;
        prevptr = curptr;
        curptr = nextptr;
    }
    return prevptr;
}

node* reverseRecursive(node* &head) {
    if(head == NULL || head -> next == NULL){
        return head;
    }
    node* newhead = reverseRecursive(head -> next);
    head -> next ->next = head;
    head -> next = NULL;
    return newhead;
}

node* reversek(node* &head,int k){
    node* curptr = head;
    node* prevptr = NULL;
    node* nextptr;
    int count = 0;
    while(curptr != NULL && count < k){
        nextptr = curptr -> next;
        curptr ->next = prevptr;
        prevptr = curptr;
        curptr = nextptr;
        count++;
    }
    if(nextptr!= NULL){
        head ->next = reversek(nextptr,k);
    }
    return prevptr; 
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
    cout<<linearSearch(n1,13)<<endl;
    // deleteAtHead(n1);
    // display(n1);
    // deleteAtTail(n1,13);
    // display(n1);
    node* newhead = reverse(n1);
    display(newhead);
    n1 = reverseRecursive(newhead);
    display(n1);
    newhead = reversek(n1,2);
    display(newhead);
    return 0;
}