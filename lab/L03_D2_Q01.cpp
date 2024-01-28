#include <iostream>

using namespace std;


int main (){

    int n ;
    cin>>n;
    for (int i=0 ; i<n;i++){
        for (int j =0 ; j<n-i-1;j++){
            cout<<"*";

        }

        {// factors 

            int ncr_r = 1;
            // cout<<1<<" ";
            for (int k = 0; k<=i;k++){
                if (k==i){
                    cout<<ncr_r;
                }else{

                    cout<<ncr_r<<" ";
                }
                ncr_r = ncr_r*( i-k)/(k+1);
            }
            


        }



        for (int j =0 ; j<n-i-1;j++){
            cout<<"*";

        }
        cout<<""<<endl;
    
    }
    return 0 ;
}