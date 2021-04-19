#include<iostream>
using namespace std;
int main(){
	int n,reverse=0;
	cout<<"enter the value of n"<<endl;
	cin>>n;
	while(n!=0){
		
		
		reverse=reverse*10+n%10;
		n=n/10;
		
	}
	cout<<reverse<<endl;
	
	
	
	
	
	return 0;
}

