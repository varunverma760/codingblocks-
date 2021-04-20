#include<iostream>
using namespace std;
bool is7present(int *arr,int n){
	if(n==0){
		return false;
	}
	if(arr[0]==7){
		
		return 7;
	}
	return is7present(arr+1,n-1);
}
int main(){
	
	int arr[]={1,2,6,7,3,5,7,9};
	int n=sizeof(arr)/sizeof(int);
	
	bool x=is7present(arr,n);
	
	if(x){
		
		cout<<"true 7 is present"<<endl;
	}
	else{
		cout<<" 7 is not present"<<endl;
	}
	
	
	return 0;
}

