#include <bits/stdc++.h>

using namespace std;
class dumb{
    private:
    int a = 1;
    int putA(){
        return a;
    }
    protected:
    int b = 2;
    int putB(){
        return b;
    }
    public:
    int c = 3;
    int putC(){
        return c;
    }
};
class child :  public dumb{ //inheritance call, wait for next video
    public:
    int getB(){
        return putB(); // using parent function in child
    }
};

int main(){

    dumb d;
    child e;
    cout<<d.putC()<<endl;   // public -> check output    
    cout<<e.getB()<<endl;  //protected-> call it from inherited class
    // cout<<d.putA()<<endl;  //private-> error
    return 0;
}