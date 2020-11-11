#include <bits/stdc++.h>

using namespace std;

int main(){
    //https://stackoverflow.com/questions/10238699/dynamically-allocating-3d-array
    int height= 2,width = 3, depth = 2;
    int i,j,k;
    cin>>height>>width>>depth;
    // Dynamically allocate a 3D array
/*  Note the parenthesis at end of new. These cause the allocated memory's
    value to be set to zero a la calloc (value-initialize). */
    int ***arr = new int **[height]();
    for (i = 0; i < height; i++)
    {
        arr[i] = new int *[width]();
        for (j = 0; j < width; j++)
            arr[i][j] = new int [depth]();
    }

     for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++){
            for(k = 0; k<depth; k++){
                cin>>arr[i][j][k];
            }
        }
    }
    cout<<endl;
    for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++){
            for(k = 0; k<depth; k++){
                cout<<arr[i][j][k]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }

    //Dynamically deallocate a 3D array

    for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++)
            delete[] arr[i][j];
        delete[] arr[i];
    }
    delete[] arr;
        

    return 0;
}