#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main(){

     int n;
     printf("enter the rows");
     scanf("%d",&n);

     for(int i = 1; i<=n; i++){
         for(int j = 1; j<=i; j++){
             ((i+j)%2==0)?printf("1 "):printf("0 ");
         }
         printf("\n");
     }   

    return 0;
}