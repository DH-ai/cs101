#include <iostream>



using namespace std;

int no_of_words(char * sentence,int i){
    
    if (sentence [i]=='.'){
        return 0;


    }
    
    while (sentence[i]==' ')
    {
        i++;
        if (sentence[i]=='.' or sentence[i]!=' ') break;
        // cout<<"SD";
    }
    if (sentence[i]!='.' and sentence[i]!=' '){
        while(sentence[i]!=' '){
            i++;
            if (sentence[i]=='.') break;
        }
    }
    
    
    return 1 + no_of_words(sentence,i);
    
    
}
int main(){
    int size = 1000;
    char sentence[size];
    cin.getline(sentence,size);
    cout<<no_of_words(sentence,0);

    return 0 ;
}