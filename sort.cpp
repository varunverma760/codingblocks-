#include<iostream>
using namespace std;
int main(){
	int arr[5];
	cout<<"Enter The Number "<<endl;
	int n,temp;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];

	}
	cout<<"Array to be Sort:"<<endl;
	for(int i=0;i<=n-2;i++){
		for (int j = 0; j <=n-2; j++)
		{
			if(arr[j]>arr[j+1])
				int temp=arr[i+1];
				arr[i]=arr[i+1];
				arr[i+1]= temp;
		}
	}
	

cout<<"Sorted Array: "<<endl;
for (int i = 0; i<n; i++)
{
	cout<<arr[i]<<" ";
}
cout<<endl;
return 0;
}