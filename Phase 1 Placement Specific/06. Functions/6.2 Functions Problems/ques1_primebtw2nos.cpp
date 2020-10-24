#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <math.h>

using namespace std;

bool isPrime(int num){
    if(num <= 1)
    return false;
    for(int i = 2; i<=sqrt(num); i++){
        if(num%i == 0)
        return false;
    }
    return true;
}

int main(){

      printf("Enter the range from x to y");
      int a,b;
      scanf("%d %d",&a,&b);

      for(int i = a; i<=b; i++){
          if(isPrime(i))
          printf("%d ",i);
      }  

    return 0;
}