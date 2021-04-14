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
void copy(char*a, char*b){
	int blen=length(b);
	int i=0;
	while(i<=blen){
		a[i]=b[i];
		i++;
		
	}
	
}
int main(){
	
	int n;
	int maxlength=0;
	char maxstring[100];
	char arr[100];
	cin>>n;
	cin.ignore();

	
	for(int i=0;i<n;i++){
		cin>>arr;
		int l=length(arr);
		if(l>maxlength){
			maxlength=l;
			copy(maxstring,arr);
		}
	
	
	
	}
	cout<<"maxlength is "<<maxlength<<endl;
	cout<<"maxstring is"<<maxstring<<endl;
	
	
	
	
	
	return 0;
	
}
