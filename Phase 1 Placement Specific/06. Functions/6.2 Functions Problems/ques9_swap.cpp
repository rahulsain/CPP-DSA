#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

void swap(int* a,int* b){
    int temp = *a;
    *a = *b;
    *b = temp;

}

int main(){

    int n,m;
    printf("Enter 2 no");
    scanf("%d %D",&n,&m);

    swap(&n,&m);

    printf("%d and %d is swapped by reference",n,m);        

    return 0;
}