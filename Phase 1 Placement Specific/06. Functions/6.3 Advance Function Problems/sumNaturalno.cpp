#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int sumOfN(int n){
    return n*(n+1)/2;
    }

int main(){

    int n;
    printf("Enter the number till you want to know sum\n");
    scanf("\n\n%d",&n);

    printf("%d",sumOfN(n));    

    return 0;
}