#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main(){

    int n;
    printf("the rows is? \n");
    scanf("%d",&n);

    for(int i = 1; i<=n; i++){
        for(int j =n; j>=i; j--){
            printf("*");
        }
        for(int j = 1; j<=2*i-1; j++){
            (j==2*i-1)?printf("*"):printf(" ");
        }
        for(int j = 2; j<=n-i+1; j++){
            printf("*");
        }
        printf("\n");
    }    

     for(int i = n; i>=1; i--){
        for(int j =n; j>=i; j--){
            printf("*");
        }
        for(int j = 1; j<=2*i-1; j++){
            (j==2*i-1)?printf("*"):printf(" ");
        }
        for(int j = 2; j<=n-i+1; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}