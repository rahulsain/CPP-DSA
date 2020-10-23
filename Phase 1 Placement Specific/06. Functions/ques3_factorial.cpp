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

int main(){

    int fact,num;
    printf("Enter the number for which you need factorial of\n");
    scanf("%d",&num);

    fact = factorial(num);
    printf("The factorial of %d is %d",num,fact);

    return 0;
}