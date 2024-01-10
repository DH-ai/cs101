#include <iostream>

using namespace std;

typedef enum {
    laugh1,laugh2,laugh3
}laughter ;
typedef struct 
{
    /* data */
    char ch;
    int i;
    float fuck;

}popa;


int main (int argv,char ** argc)
{
    laughter lol = laughter::laugh1;
    int lo1l = int(lol)+static_cast<int>(laughter::laugh3) ;
    // cout<<lo1l<<endl;
    // lol.laugh3 =4;
    // cout<<lol.laugh3<<endl;
    popa hot;
    float f = hot .fuck ;
    cout<< f<<endl;
    hot.fuck=2;
    cout<<hot.fuck<<endl;
    
	return 0;
}
