#include<simplecpp>

int main(){
	int n;
	int a;
	int d;
	cin>>a;
	cin>>d;
	cin>>n;
	int i = 0;
	repeat(n){
		cout<<a+i*d<<" ";
		i++;
	}
	return 0;
}

