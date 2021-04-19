#include<iostream>
using namespace std;
int main(){
	float totalsalary,hra,da,allow,pf;
	int basic;char c;
	
	cin>>basic;
	cout<<" ";
	cin>>c;
	
	
	
	if(c=65){
		allow=1700;
	
		
		
	}
	else if( c=66 ){
		allow =1500;
		



	}
	
	else {
	
		allow=1300;
	
	}	
	
	totalsalary=(basic+(20*basic/100)+( 50*basic/100)+allow-(11*basic/100));
	cout<<totalsalary;
		
	
	
	
	
	
	return 0;
}
