#include <iostream>
using namespace std;

int main(){
    int size = 1000;
    char sentence [size];
    cin.getline(sentence,size);

    int i =0;
    int cnt =1;
    while (sentence[i]!='.'){
        // cout<<sentence[i];
        i++;  
        if (sentence [i]==' '){
            // cnt++;
            i++;
            // cout<<"hello";
            while(sentence[i]==' '){
                i++;
                if (sentence[i]=='.' or sentence[i]!=' ') break;
            }
            if (sentence[i]=='.') break;
            cnt++;
        }
        


    }
    
    cout<<cnt;

    
    
    
    
    
    
    return 0 ;

}