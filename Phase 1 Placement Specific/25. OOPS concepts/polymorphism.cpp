#include <bits/stdc++.h>

using namespace std;
class dumb{
    public:
    virtual void display(){
        cout<<"parent";
    }
};
class child :  public dumb{ //inheritance call, wait for next video
    public:
    virtual void display(){
        cout<<"child";
    }
};

int main(){

    dumb *d;
    child e;
    d = &e;
    d -> display(); // because parent is virtual, it will print child irrespective of virtual in child
    return 0;
}