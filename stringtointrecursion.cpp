#include<iostream>
#include<string.h>
using namespace std;

int stringtoint(char *a,int n){
	//base case
	
	if(n==0){
		return 0;
	}
	
	
	//recursive case
	int digit=a[n-1]-'0';
	
	
	return stringtoint(a,n-1)*10+digit;
}



int main(){
	
	
	char arr[100];
	cin>>arr;
	int l= strlen(arr );
	int x =stringtoint(arr,l);
	
	cout<<x<<endl;
	int y=x+100;
	cout<<y<<endl;
	
	return 0;
}
