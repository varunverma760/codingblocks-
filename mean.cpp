#include<iostream>
using namespace std;
int main()
{
	int n,sum=0,max_val;
	cout<<"Enter the value of n"<<endl;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		sum=sum+arr[i];
	}
	float mean=sum/n;
	int min_val=arr[0];
	for(int i =1;i<n;i++){
		if(arr[i]<min_val){
			min_val=arr[i];
		}
	}
	cout<<"mean is:"<<mean<<endl;
	cout<<"max value is:"<<max_val<<endl;
	cout<<"min value is:"<<min_val<<endl;
	/* code */
	return 0;
}
