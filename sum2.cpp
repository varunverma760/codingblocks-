#include<iostream>
using namespace std;
int main(){
	int sum =0;
	int arr[5];
	for(int i=0;i<=5;i++){
		cout<<"Enter the numbers : "<<i+1<<endl;
		cin>>arr[i];

	}
	for(int i=0;i<5;i++){
		sum+=arr[i];
		cout<<" total sum is : "<<sum<<" "<<endl;
	}
	return 0;
}