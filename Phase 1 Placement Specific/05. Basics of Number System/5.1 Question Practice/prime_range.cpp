#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main(){

    int a,b;
    printf("Enter the range in between you wanna check for prime numbers");
    scanf("%d %d",&a,&b);
    
    for(int i = a; i<=b; i++){
        bool flag = false;
        if(i <= 1){
            continue;
        }
        for(int j = 2; j*j <= i; j++){
            if(i%j == 0){
                flag = true;
                break;
            }
        }
        
        if(!flag)
            printf("%d\n",i);
    }        

    return 0;
}