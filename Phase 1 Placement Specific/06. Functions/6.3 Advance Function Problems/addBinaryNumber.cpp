#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int reverse(int n){
    int answer;

    while(n>0){
    int lastDigit = n % 10;
    answer = answer*10 + lastDigit;
    n /= 10;
    }

return answer;
}

int addBinary(int a, int b)
{
    int ans = 0;
    int prevCarry = 0;

    while(a>0 && b>0){
        if(a%2 == 0 && b%2 == 0){
            ans = ans*10 + prevCarry;
            prevCarry = 0;
        }
        else if((a%2 == 0 && b%2 == 1) || (a%2 == 1 && b%2 == 0)){
            if(prevCarry == 1){
                ans = ans * 10 + 0;
                prevCarry = 1;
            }
            else{
                ans = ans*10 + 1;
                prevCarry = 0;
            }
        }
        else{
            ans = ans*10 + prevCarry;
            prevCarry = 1;
        }
        a /= 10;
        b /= 10;
    }

    while(a>0){
        if(prevCarry == 1){
            if(a%2 == 1){
                ans = ans * 10 + 0;
                prevCarry = 1;
            }
            else{
                ans = ans*10 + 1;
                prevCarry = 0;
            }
        }
        else{
                ans = ans * 10 + (a%2);
        }
        a /= 10;
    }

    while(b>0){
        if(prevCarry == 1){
            if(b%2 == 1){
                ans = ans * 10 + 0;
                prevCarry = 1;
            }
            else{
                ans = ans*10 + 1;
                prevCarry = 0;
            }
        }
        else{
                ans = ans * 10 + (b%2);
        }
        b /= 10;
    }

    if(prevCarry == 1){
        ans = ans*10 + 1;
    }

    return  ans = reverse(ans);
}

int main(){

    int a,b;
    cout<<"Enter 2 binary numbers"<<endl;
    cin>> a >> b;

    cout<<addBinary(a,b)<<endl;    

    return 0;
}