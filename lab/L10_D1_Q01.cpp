#include <iostream>
using namespace std;

int main(){
    char sentence [1000];
    cin.getline(sentence,1000);
    int v=0;
    int c=0;
    int s=0;
    int com =0;

    for (int i =0 ;i<1000;i++){
        if 
        (
        sentence[i]=='a' or 
        sentence[i]=='A' or 
        sentence[i]=='e' or 
        sentence[i]=='E' or 
        sentence[i]=='i' or 
        sentence[i]=='I' or 
        sentence[i]=='o' or 
        sentence[i]=='O' or 
        sentence[i]=='u' or 
        sentence[i]=='U' ){
            v++;
            
        }
        else if (sentence[i]==' '){
            s++;
        }
        else if (sentence [i]==',') com++;
        else if (sentence[i]==';') continue;
        else if (sentence[i]=='.') continue ;
        else if (sentence[i]=='\0') break; 
        // else if (sentence[i]==NULL) continue;
        else{

            c++;
        } 
        cout<<sentence[i]<<','<<v<<endl;

    }
    cout<<v<<" "<<c<<" "<<s<<" "<<com;




    return 0;
}