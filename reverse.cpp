#include<iostream>
using namespace std;
void reversearray(int arr[],int start ,int end){
	/*function to reverse arr[] from start to end*/
	while (start<end){
		int temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
}
void printArray(int arr[],int size) //utility function to print array
{
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
		cout<<endl;

	}
} 
int main(){
	int arr[5];
	for(int i=0;i<5;i++){
		cout<<"Enter the number to reverse : "<<endl;
		cin>>arr[i];

	}
	int n=sizeof(arr)/sizeof(arr[0]);
	reversearray(arr,0,n-1);
	cout<<"Reversed array"<<endl;
	printArray(arr,n);
	return 0;
}