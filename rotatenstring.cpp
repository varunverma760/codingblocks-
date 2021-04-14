#include<iostream>
using namespace std;
int length(char*x){
	int i=0;
	int co=0;
	for(int i=0;x[i]!='\0';i++){
		co++;
	}
	return co;
	
	
}
int main(){
	char arr[100];
	cin>>arr;
	int n;
	cin>>n;
	int larr =length(arr);

	for(int j=larr-1;j>=0;j--){
	arr[j+n]=arr[j];
	}
	int k=larr;
	int l=0;

	for(int i=0;i<n;i++){
		arr[l]=arr[k];
		l++;
		k++;
	}
	
	arr[larr]='\0';
	cout<<arr<<endl;
	
	
	
	
	
	return 0;
}
