#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

bool eligible(int age){
    if(age>=18 && age<150)
    return true;
    return false;
}

int main(){

    int age;
    printf("Enter your age to check eligibity to vote or not\n");        
    scanf("%d",&age);
    
    if(eligible(age))
        printf("ELIGIBLE");
    else
        printf("NOT ELIGIBLE");
    
    return 0;
}