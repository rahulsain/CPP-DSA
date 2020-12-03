#include <bits/stdc++.h>

using namespace std;

void swap(int a[],int i,int j){
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

int partition(int arr[], int l, int r)
{
    int pivot = arr[r];
    int i = l-1;
    for(int j = l; j<r;j++){
        if(arr[j] < pivot){
            i++;
            swap(arr,i,j);
        }
    }   
    swap(arr,i+1,r);
    return i+1;
}

void quickSort(int a[], int l, int r)
{
    if (l < r)
    {   int pi = partition(a, l, r);
        quickSort(a, l, pi - 1);
        quickSort(a, pi + 1, r); 
    }
}

int main()
{

    int a[] = {5, 4, 3, 2, 1, -1};
    quickSort(a, 0, 5);
    for (int i = 0; i < 6; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}