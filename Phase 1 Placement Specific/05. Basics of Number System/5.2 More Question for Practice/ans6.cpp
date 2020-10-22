#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main(){

    int n;
    printf("enter the no for which you need all factors of it\n");
    scanf("%d",&n);

    int div = 1;
    while (div<=n)
    {
        if(n%div==0){
            printf("%d ",div);
        }
        div++;
    }
            
    return 0;
}