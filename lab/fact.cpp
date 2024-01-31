#include <simplecpp>


int main (){




	int n ;

	cin>>n;
	int f= 1;
	int t= 1;
	repeat(n){
		f=f*t;

		t++;
	}

	cout<<f;




}
