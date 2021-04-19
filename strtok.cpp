#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char arr[]="123456....%$'''''56$736473....'63463";
	char*ptr=strtok(arr,".%$");
	cout<<ptr<<endl;
	while(ptr!=NULL){
		cout<<ptr<<endl;
		ptr=strtok(NULL,".%$");
	}
	return 0;
	
	
}
