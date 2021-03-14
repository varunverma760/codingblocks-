#include<iostream>
using namespace std;
int main(){
	int arr[5];
	for(int i=0;i<5;i++){
		cout<<"Enter the number"<<i+1<<endl;
		cin>>arr[i];

	}
	cout<<"The reverse order is :"<<endl;
	for(int i=4;i>=0;i--){

		cout<<arr[i]<<endl;
	}
	return 0;

}