#include <iostream>

using namespace std;

int main (int argc,char ** argv ){

    short s = 1;

    cout<<"Hello world \" \n "<<s<<endl;

    // now little bit casting 
    bool b1 = (bool)s; //method 1
    bool b2 = bool(s); //method 2
    bool b3 = static_cast<bool>(s); //method 3

    long l= s;// no casting needed, variables autoatically cast or coerced like this one 
    // namespace already been explained 
    float f =s;
    cout<<b1+"\n"<<b2<<"\n"<<b3<<"\n"<<l<<"\n"<<f<<endl;
    return 0;
}