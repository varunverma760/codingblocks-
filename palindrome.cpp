#include<iostream>
using namespace std;
int length(char *a){
	int i=0;
	int co=0;
	while(a[i]!='\0'){
		co++;
		i++;
	}
	return co;
}
bool ispalindromeornot(char *a){
	int i=0;
	int j=length(a)-1;
	while(i<j){
		if(a[i]!=a[j]){
			return false;
		}
		j--;
		i++;
	}
	return true;
}
int main(){
	char a[100];	
    cin>>a;
	
	if(ispalindromeornot(a)){
		cout<<"yes it is a palindrome "<<" "<<endl;
		
	}
	else {
		cout<<" No it is not a plaindrome "<<" "<<endl;
	}
	
	return 0;
}
