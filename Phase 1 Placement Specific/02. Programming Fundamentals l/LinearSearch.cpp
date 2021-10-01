#include<bits/stdc++.h>
using namespace std;

//LinearSearchAlgorithm
int LinearSearch(int arr[], int n, int key)
{
    for(int i = 0; i < n; i++)     //n_is_size_of_array
    {                              //i_is_index_of_array
        if(arr[i] == key)          //key_is_the_element_to_be_found
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i<=n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cin >> key;

    cout << LinearSearch(arr, n, key) << endl;


    return 0;
}

