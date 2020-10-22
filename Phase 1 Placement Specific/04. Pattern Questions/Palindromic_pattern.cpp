#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main(){

     int n;
     printf("enter the rows");
     scanf("%d",&n);

     for(int i = 1; i<=n; i++){
         int j;
         for(j = 1;j<= n-i; j++){
             printf("  ");
         }
         int k = i;
         for(; j<=n; j++){
             printf("%d ",k--);
         }
          k = 2;
         for(; j<= n+i-1; j++){
             printf("%d ",k++);
         }
         printf("\n");
     }  
    return 0;
}