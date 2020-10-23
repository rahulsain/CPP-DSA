#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int max(int a,int b, int c){
    return (a>=b)?((a>=c)?a:c):((b>=c)?b:c);
}

int min(int a,int b, int c){
    return (a<b)?((a<c)?a:c):((b<c)?b:c);
}

int main(){

    int n1,n2,n3;

    printf("Enter 3 nos");
    scanf("%d %d %d",&n1,&n2,&n3);

    int maxNo = max(n1,n2,n3);  
    int minNo = min(n1,n2,n3);    

    printf("The maximum number is %d and minimum number is %d",maxNo,minNo);

    return 0;
}