#include<iostream>
using namespace std;
int main(){
	int arr[100],n,ele,pos;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	cout<<"\n Enter the elements of the array"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"\n Enter the postion of the array"<<endl;
	cin>>pos;
	for(int i=1;i<=n;i++){
		if(pos==i){
			ele=arr[i];
		}
		
	}
	cout<<"\nElement at  position "<<pos<<"is "<<" "<<ele<<endl;
return 0;
}

