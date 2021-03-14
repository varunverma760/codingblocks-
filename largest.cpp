#include <bits/stdc++.h>
using namespace std;
int largest(int arr[],int n){

int max=arr[0];
for(int i=0;i<n;i++){
	if(arr[i]>max){
		max=arr[i];
	}
}
return max;
}
	
int main(){
	int arr[5];
	for(int i=0;i<=5;i++){
		cout<<"Enter the number : "<<" "<<i+1<<endl;
        cin>>arr[i];
	}
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"Largest number is "<<largest(arr,n)<<endl;

	return 0;
}