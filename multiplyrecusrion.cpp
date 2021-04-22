#include<iostream>
using namespace std;
int multiply(int a, int b){
	//base case
	if(b==0){
		
		
		return 0;
	}
	
	//recursive case
	//int chotaans=multiply(a,b-1);
	//int badaans=a+chotaans;
	return  a+multiply(a,b-1);
	
}
int main(){
	
	int a,b;
	cin>>a>>b;
	int x=multiply(a,b);
	
	cout<<multiply(a,b)<<endl;
	
	
	
	
	return 0;
	
}
