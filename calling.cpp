#include<iostream>
using namespace std;
int main(){
	int a[]={1,2,6,4,5,3,9,40};
	int n=sizeof(a)/sizeof(int);

	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";

	}
	cout<<endl;


	return 0;
}