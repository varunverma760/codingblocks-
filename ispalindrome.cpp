#include<bits/stdc++.h>
using namespace std;
bool ispall(int arr[],int s,int e){
	if(s>=e){
		return true ;
		
	}
	if(arr[s]!=arr[e]){
		return false;
	}
	return ispall(arr,s+1,e-1);
}

int main(){
	int n;
	cin>>n;
	
	int a[n],i;
	for(int i=0;i<n;i++)
	cin>>a[i];
	if(ispall(a,0,n-1)){
		cout<<"true";
	}
	else{
	 	cout<<"false";
	}
	
	
	
	return 0;
}
