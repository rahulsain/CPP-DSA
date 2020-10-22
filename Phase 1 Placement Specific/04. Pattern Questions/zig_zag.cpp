#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main(){

    int n;
    printf("enter no of stars");
    scanf("%d",&n);   

    for(int i = 1; i<=3; i++){
       for(int j = 1; j<=n; j++){
            ((i+j)%4==0 || (i==2 && j%4==0))?printf("* "):printf("  ");
       } 
       printf("\n");
    }   

    return 0;
}