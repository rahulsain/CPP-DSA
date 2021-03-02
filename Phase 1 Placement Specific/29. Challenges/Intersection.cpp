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

int length(node* head){
    int l = 0;
    node* temp = head;
    while(temp != NULL){
        l++;
        temp = temp -> next;
    }
    return l;
}

int intersection(node* head1,node* head2){
    int l1 = length(head1);
    int l2 = length(head2);

    int d = 0;
    node* ptr1;
    node* ptr2;
    if(l1 > l2){
        d = l1 - l2;
        ptr1 = head1;
        ptr2 = head2;
    }
    else{
        d = l2 - l1;
        ptr1 = head2;
        ptr2 = head1;
    }
    while(d){
        ptr1 = ptr1 -> next;

        if(ptr1 == NULL)
            return -1;
        d--;
    }
    while(ptr1 != NULL && ptr2 != NULL){
        if(ptr1 == ptr2){
            return ptr1 -> data;
        }
        ptr1 = ptr1 -> next;
        ptr2 = ptr2 ->next;
    }
    return -1;
}

void intersection(node* head1,node* head2,int pos){

    node* temp1 = head1;
    pos--;
    while(pos--){
        temp1 = temp1 -> next;
    }
    node* temp2 = head2;
    while(temp2 -> next != NULL){
        temp2 = temp2 -> next;
    }
    temp2 ->next = temp1;
}

int main(){

    node* head1 = NULL;
    int arr1[] = {11,12,13,14,15,16,17,18,25,33,35,46};
    for(int i = 0; i< *(&arr1 + 1) - arr1; i++){
        insertAtTail(head1,arr1[i]);
    }
    node* head2 = NULL;
    int arr2[] = {53,54,87,94};
    for(int i = 0; i< *(&arr2 + 1) - arr2; i++){
        insertAtTail(head2,arr2[i]);
    }
    intersection(head1,head2,3);
    display(head1);
    display(head2);
    cout<<intersection(head1,head2);
    return 0;
}