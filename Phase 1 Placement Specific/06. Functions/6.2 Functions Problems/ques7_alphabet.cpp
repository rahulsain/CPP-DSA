#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

bool alphabet(char ch){
    int n = (int) ch;
    return ((n>=65 && n<=90) || (n>=97 && n<=122));
    }

int main(){

    char character;
    printf("Enter the character for which you want to check for alphabet or not\n");
    scanf("%c",&character);

    if(alphabet(character))
    printf(" %c is an Alphabet",character);
    else
    {
        printf(" %c is not an Alphabet",character);
    }
         

    return 0;
}