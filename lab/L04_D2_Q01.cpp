#include<simplecpp>

main_program{
	int n ;
	cin>>n;
	int cnt =1 ;
	repeat(n){
		double marks;
		cin>>marks;
		
		if (cnt==n){
			if (100>= marks &&marks>=90)cout<<"AA";
			else if (80<=marks && marks<90)cout<<"AB";
			else if (70<=marks && marks<80)cout<<"BB";
			else if (60<=marks && marks<70)cout<<"BC";
			else if (40<=marks && marks<60)cout<<"CC";
			else if (marks<0 or marks >100){cout<<"INVALID";}
			else if (marks<40){ cout<<"F";}
		
		
		}
		else {
			if (100>= marks &&marks>=90)cout<<"AA"<<ends;
			else if (80<=marks && marks<90)cout<<"AB"<<ends;
			else if (70<=marks && marks<80)cout<<"BB"<<ends;
			else if (60<=marks && marks<70)cout<<"BC"<<ends;
			else if (40<=marks && marks<60)cout<<"CC"<<ends;
			else if (marks<0 or marks >100){cout<<"INVALID"<<ends;}
			else if (marks<40){ cout<<"F"<<ends;}
		
		
		
		
		}
		cnt++;
		
	}

	
	
}
