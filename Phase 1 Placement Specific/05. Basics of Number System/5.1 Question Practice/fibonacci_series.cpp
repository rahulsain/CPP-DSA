#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main(){

    int n;
    printf("Enter the no you want to know the fibonacci series");
    scanf("%d",&n);

    if(n ==1)
    printf("0\n");
    else if(n == 2)
    printf("0 1 \n");
    else{
        int a = 0, b = 1, c, i = 3;
        printf("%d %d ",a,b);
        while (i <=n)
        {
            c = a + b;
            printf("%d ",c);
            a = b;
            b = c;
            i++;
        }
        printf("\n");
    }            

    return 0;
}