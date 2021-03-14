#include <iostream>
using namespace std;
int main(){
	int arr[5],prod,sum,avg;
	for(int i=0;i<5;i++){
		cout<<"Enter the price of item : "<<i+1<<endl;
		cin>>arr[i];
		sum+=arr[i];
		prod*=arr[i];
	}
		avg=sum/5;
		cout<<"The sum of the items are : "<<sum<<endl;
		cout<<"The product the item are : "<<prod<<endl;
		cout<<"The average of the items are : "<<avg<<endl;
	

	return 0;
}
