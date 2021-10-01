#include<iostream>
using namespace std;

int main ()
{
    int size;
    cin >> size;

    int arr[size];

    for(int iterate = 0; iterate < size; iterate++)
    {
        cin >> arr[iterate];
    }

    int counter = 1;
    while( counter < size)
    {
        for (int iter = 0; iter = size-counter; iter++)
        {
            if(arr[iter] > arr[iter + 1])
            {
                int temp = arr[iter + 1];
                arr[iter] = arr[iter + 1];
                arr[iter + 1] = temp; 
            }
        }
        counter++;
    }

    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << "";

    } cout << endl;
}