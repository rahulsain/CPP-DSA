#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

void fibonacci(int n){
    int a = 0;
    int b = 1;
    int nextTerm;

    for(int i = 0; i<n; i++){
        printf("%d ",a);
        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }
}

int main(){

    int step;
    printf("Enter the steps till you want to check for fibonacci series");
    scanf("\n%d",&step);

    fibonacci(step);    

    return 0;
}