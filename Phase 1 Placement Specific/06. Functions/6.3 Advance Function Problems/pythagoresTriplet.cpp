#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

bool check(int x,int y,int z){
    int a = max(x,max(y,z));
    int b,c;
    if(a == x){
        b = y;
        c = z;
    }
    else if(a == y){
        b = x;
        c = z;
    }
    else{
        b = x;
        c = y;
    }
    if(a*a == b*b + c*c)
        return true;
        return false;
}

int main(){

    printf("Enter 3 numbers for which you want to check pythagores triplet");
    int a,b,c;
    scanf("%d %d %D",&a,&b,&c);

    if(check(a,b,c))
    printf("PYTHAGORES TRIPLET"); 
    else
    printf("NOT A PYTHAGORES TRIPLET");
    

    return 0;
}