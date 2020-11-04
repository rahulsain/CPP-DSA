#include <iostream>
#include <conio.h>
#include <climits>

using namespace std;

int main(){

    int n,mx = INT_MIN;
    cin>>n;

    int a[n];
    for(int i = 0; i<n; i++)
        cin>>a[i];

    for(int i = 0; i<n; i++){
        mx = max(mx,a[i]);
        cout<<mx<< " ";
    }    

    return 0;
}