#include<iostream>
using namespace std;

int main ()
{
    int n;
    cin >> n;
    
    int arr[n];
    for(int starter =0; starter < n; starter++)
    {
        cin >> arr[n];
    }
    for(int starter =0; starter < n-1; starter++)
    {
        for(int iterate = starter +1; iterate < n; iterate++)
        {
            if(arr[iterate] < arr[starter])
            {
                int temporary = arr[iterate];
                arr[iterate] = arr[starter];
                arr[starter] = temporary;
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}