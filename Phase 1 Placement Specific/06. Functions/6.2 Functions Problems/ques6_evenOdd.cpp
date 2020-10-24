#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

bool isEven(int n){
    if(n%2 == 0)
        return true;
    
    return false;
}

int main(){

    int no;
    printf("Enter number for which you want to check even or odd\n");
    scanf("%d",&no);

    if(isEven(no))
    printf("%d is even",no);
    else
    printf("%d IS ODD",no);

    return 0;
}