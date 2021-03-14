#include<iostream>
#include<climits>
using namespace std;
int main(){
	int arr[5];
	cout<<"enter the number of the array"<<endl;
   	
   	int max=INT_MIN,n ;
	
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];

	}
	for(int i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	cout<<max<<endl;

	return 0;
	
}