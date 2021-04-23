#include<iostream>
using namespace std;
int binaryserachrecursion(int *arr,int key,int s,int e){
	//base case
	
	if(s>e){
		return -1;
	}
	//recursive case
	int mid=(s+e)/2;
	if(arr[mid]>key){
		binaryserachrecursion(arr,key,s,mid-1);
		
		
	}
	else if(arr[mid]==key){
		return mid;
	}
	else{
	binaryserachrecursion(arr,key,mid+1,e);
	}
	
	
	
	
}
int main(){
	
	int arr[100];
	cout<<"Enter the number of elements :"<<endl;
	
	int n;
	
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
		
	}
	int key;
	cin>>key;
	int x=	binaryserachrecursion(arr,key,0,n-1);
//	for(int i=0;i<n;i++){
//		cout<<arr[i]<<" ";
//	}
	cout<<x<<endl;
	cout<<endl;
	
	
	
	return 0;
}
