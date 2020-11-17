#include <bits/stdc++.h>
//please star the repo, i update daily
using namespace std;

//getBit means what is value of n number at pos position,it can be 1 or 0 only(bits)
int getBit(int n,int pos){
    return (n & (1<<pos)) != 0;
}
//setBit means put 1 in n number at pos position
int setBit(int n, int pos){
    return (n | (1<<pos));
}
//clearBit means put 0 in n number at pos position
int clearBit(int n, int pos){
    int mask = ~(1<<pos);
    return (n & mask);
}
//if you notice when we put 1 as value in below function , it will be same as setBit whereas when
//we provide 0 to it , it will function same as clearBit 
//impressed, research on it!!
int updateBit(int n,int pos,int val){
    int mask = ~(1<<pos);
    n &= mask;
    return (n | (val<<pos));
}

int main(){

    int n,pos;
    cin>>n>>pos;

    cout<<"getBit "<<getBit(n,pos)<<endl;
    cout<<"setBit "<<setBit(n,pos)<<endl;
    cout<<"clearBit "<<clearBit(n,pos)<<endl;
    cout<<"updateBit "<<updateBit(n,pos,0)<<endl; //provide 1 or 0 only to val variable(bits)
    

    return 0;
}