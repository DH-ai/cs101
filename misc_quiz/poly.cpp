#include <iostream>
#include <cstdio>

using namespace std;

int poly_func(int n,int x, int a[], int i = 0){
    if (n==0){
        return a[i];
    }
    
    return a[i]+ x*(poly_func(n-1,x,a,i++));

}
int main (){
    int n;
    int x;
    printf("give me the degree of the polynomial");
    cin>>n;
    printf("give me the integer x");
    cin>>x;
    int a[n+1];
    for(int i=0; i<=n; i++)
    {
        cout<<"enter a"<<i<<"\n"<<endl;
        cin>>a[i];
        
    }
    
    
    
    int sum = poly_func(n,x,a);
    cout<<sum<<endl;

}

