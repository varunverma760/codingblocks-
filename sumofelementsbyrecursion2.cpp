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
int sum2(int *a,int n,int i)
{
	
	//base case
	if(i==n){
		
		return 0;
	}
	
	
	//recursive case
	
	
	//int chotiproblem=sum(a,n,i+1);
	//int badiproblem=a[i]+chotiproblem;
	return a[i]+sum2(a,n,i+1);
	
	
	
}
int main(){
	
	int a[]={1,2,3,4,5,6};
	int n=sizeof(a)/sizeof(int);
	int x1=sum(a,n);
	cout<<"Sum is "<<x1<<endl;
	int b[]={1,2,3,4};
	n=sizeof(b)/sizeof(int);
	int x2=sum2(a,n,0);
	cout<<"sum is"<<x2<<endl;
	
	
	return 0;
}
