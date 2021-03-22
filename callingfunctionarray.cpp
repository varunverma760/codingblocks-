#include<iostream>
using namespace std;
void print(int a[],int n){
	cout<<"Inside Print function"<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
		cout<<endl;
	}

}
int main(){
	int a[]={1,2,6,4,5,3,9,40};
	int n=sizeof(a)/sizeof(int);

	print(a,n);



	

	return 0; 



}