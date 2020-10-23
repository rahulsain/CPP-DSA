#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int factorial(int n){
    int result = 1;
    for(int i = 2; i<=n; i++){
        result *= i;
    }
    return result;
}

int binaryCoefficient(int n,int r){
    return factorial(n)/(factorial(n-r)*factorial(r));
}

int main(){

    int n;
    printf("Enter rows");
    scanf("%d",&n);

    for(int i = 0;i<n; i++){
        for(int j = 0; j<=i; j++){
            printf("%d ",binaryCoefficient(i,j));
        }
        printf("\n");
    }    

    return 0;
}