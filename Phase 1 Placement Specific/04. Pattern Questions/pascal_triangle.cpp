#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main(){

    int n;
    printf("enter rows");
    scanf("%d",&n);
    int coeff = 1;

    for(int i = 0; i<n; i++){
        for(int j =1; j<= n-i; j++){
            printf(" ");
        }
        for(int j =0; j<=i; j++){
            coeff = (j==0||i==0)?1:coeff*(i-j+1)/j;
            printf("%d ",coeff);
        }
        printf("\n");
    }    

    return 0;
}