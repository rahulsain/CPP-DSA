#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int factorial(int n){
    int result = 1;
    for(int i = 2; i<=n; i++){
        result *= i;
    }
    return result;
}

int binaryCoefficient(int n,int r){
    return factorial(n)/(factorial(n-r)*factorial(r));
}

int main(){

    int n,r,ans;

    printf("Enter n(total number of objects in the set) and r(number of choosing objects from the set)");
    scanf("%d %d",&n,&r);

    ans = binaryCoefficient(n,r);
    printf("%d",ans);

    return 0;
}