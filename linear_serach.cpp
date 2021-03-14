#include<iostream>
using namespace std;
int main(){
	int arr[100];
	cout<<"enter the number of elements :"<<endl;

	int n,key;
	cin>>n;
	for(int i=0;i<n;i+++)
	{
		cin>>arr[i];
	}
	cout<<"enter key"<<endl;
	cin>>key;

	for(int i=0;i<n;i++){
		if(key==arr[i]){
			cout<<"element is foud at index :"<<i<<endl;
			break;
		}
	}
	

	if (i==n){
		cout<<"key is not present"<<endl; 
	}



	return 0;
}
