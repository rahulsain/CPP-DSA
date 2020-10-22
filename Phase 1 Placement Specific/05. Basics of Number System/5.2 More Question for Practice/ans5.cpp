#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main(){

    char ch;
    printf("Enter the character for which you want to know ASCII value\n");
    scanf("%c",&ch);

    int val = (int)ch;
    printf("%d",val);    

    return 0;
}