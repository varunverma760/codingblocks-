#include<iostream>
using namespace std;
void printarray(int a[],int x){
	cout<<"inside print array : "<<" "<<endl;

	for(int i=0;i<x;i++){
		cout<<a[i]<<" ";

	}
	cout<<endl;
}
void update(int a[],int n){
	for(int i=0;i<n;i++){
		a[i]=a[i]+1;
	}
	

}
int main(){

	int a[100],n;
	cout<<"enter the value of n"<<" "<<endl;
	cin>>n;
	for(int i =0;i<n;i++){
		cin>>a[i];
	}

	cout<<"Array before upgradation"<<" "<<endl;
	printarray(a,n);
	update(a,n);
	cout<<"Array after upgradation"<<" "<<endl;
	printarray(a,n); 
	return 0;
}