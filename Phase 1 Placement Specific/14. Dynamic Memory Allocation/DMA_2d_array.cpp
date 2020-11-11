#include <bits/stdc++.h>

using namespace std;

int main(){
    //https://www.geeksforgeeks.org/dynamically-allocate-2d-array-c/
    int r =4, c= 3,len = 0;
    int *ptr,**arr;
    int count = 0,i,j;

    len = sizeof(int *) * c + sizeof(int) * c * r;

    arr = (int **)malloc(len);
    // ptr is now pointing to the first element in of 2D array
    ptr = (int *)(arr +r);
    // for loop to point rows pointer to appropriate location in 2D array 
    for(i = 0; i<r; i++){
        arr[i] = (ptr + c * i);
    }  

    for(i = 0; i<r; i++){
        for(j =0; j<c; j++){
            *(*(arr+i) + j) = ++count; // OR arr[i][j] = ++ count
        }
    }       
    //printing arrays
    for (i = 0; i < r; i++){ 
        for (j = 0; j < c; j++){ 
            cout<<arr[i][j]<<" "; 
        }
        cout<<endl;
    }

    //i dont know is it right to de-allocate this cause we didnt use new keyword at all , need your opinions  
    for (i = 0; i < r; i++){ 
        for (j = 0; j < c; j++){ 
            delete[] arr[i]; 
        }
        delete[] arr;
    }
    

    return 0;
}