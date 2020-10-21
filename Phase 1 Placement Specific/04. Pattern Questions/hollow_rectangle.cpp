#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

int main (){
    int rows,cols;
    printf("Enter the no of rows and columns");
    scanf("%d %d",&rows,&cols);
    for(int i = 1; i<=rows; i++){
        for(int j = 1; j<=cols; j++){
            (i == 1 || i == rows || j == 1 || j == cols)? printf("* ") : printf("  ");
        }
        printf("\n");
    }
    return 0;
}