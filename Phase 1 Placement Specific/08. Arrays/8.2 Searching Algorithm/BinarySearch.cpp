#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int BinarySearch(int a[],int n,int ele){
    int low = 0;
    int high = n;
    
    while(low<=high){
        int mid = (low + high)/2;

        if(a[mid] == ele)
        {return mid;}

        else if(a[mid] > ele)
        {high = mid - 1;}

        else
        {low = mid + 1;}
    }
    return -1;
}

int main(){

    int n,key;
    cout<<"Enter array size ";
    cin>>n;

    int arr[n];
    cout<<"Enter array elements ";
    
    //for-each loop shows error don't know why
    // for(int i : arr){
    //     cin>>i;
    // }

    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter key element ";
    cin>>key;

    cout<<"Found the element "<<key<<" at position "<<BinarySearch(arr,n,key);

    return 0;
}