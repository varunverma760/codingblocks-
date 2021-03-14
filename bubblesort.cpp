#include<iostream>
using namespace std;
int main(){
	int arr[100];
	cout<<"Enter the elements:"<<endl;
	int n;

	cin>>n;

	for(int i=0;i<n;i++){
		cin>>arr[i];

	}
	

	//bubblesort

	for(int i=0;i<=n-2;i++){
		for(int j=0;j<=n-2;j++){
			if(arr[j]>arr[j+1]){
				//swap
				int temp =arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;

			}
		}
	}
	cout<<"Array after SOrting"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;

}
