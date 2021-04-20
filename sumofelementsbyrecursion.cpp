#include<iostream>
using namespace std;
int sum(int *a,int  n){
	
	//base case
	
	if(n==0){
		
		
		return 0;
	}
	
	
	
	//recursive case
	
	//int chotiproblem=sum(a+1,n-1);
	//int badiproblem=a[0]+chotiproblem;
	return a[0]+sum(a+1,n-1);
	
	
}
int main(){
	
	int a[]={1,9,4,5,8,9,10};
	int n=sizeof(a)/sizeof(int );
	int x1=sum(a,n);
	cout<<"sum is : "<<x1<<endl;
	
	return 0;
}
