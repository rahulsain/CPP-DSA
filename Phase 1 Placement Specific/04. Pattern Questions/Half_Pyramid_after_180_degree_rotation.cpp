#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main(){

    int n;
    printf("Enter no of rows\n");
    scanf("%d",&n); 

    for(int i = 1; i<=n; i++){
        for (int j = 1; j <=n; j++)
        {
            if(j <= n-i){
                printf("  ");
            }
            else{
                printf("* ");
            }
        }
        printf("\n");
    }

    return 0;
}