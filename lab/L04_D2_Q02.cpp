#include<simplecpp>

main_program{
	int day;
	int month;
	int year;
	cin>>day;
	cin>> month;
	cin>>year;
	if(day<1 || year>3000 || year<1400 || day>31 || month <1 || month>12) cout<<"invalid";
	else {
		if (month<8){
			if(month%2==0 && day>30)cout<<"invalid";
			else if ((month ==2 && day>28 && year%4!=0)||(month ==2 && day>29 && year%4==0))cout<<"invalid";
			else cout<<"valid";
			
		}
		else {
			if((month+1)%2==0 && day>30)cout<<"invalid";
			else cout<<"valid";
		}
		
	
		
	
	}
	
	


}
