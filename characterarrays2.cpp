#include<iostream>
using namespace std;
int main(){
	
	/*char arr[]={'A','b','c','D','\0'};
	char arr1[]={'A','b','c','D','\0'};
	cout<<arr<<endl;
	cout<<arr1<<endl;
	char arr2 []= "abcd";   // agar aap input de rhao <- in the form of string by default unke end mein null hota hai or they contains by default  null  
	cout<<arr2<<endl;
	
	
	int a[]={1,2,3};  // a is internal pointer and will give  you address
	cout<<a<<endl; */
	
//	char arr3[100];
//	cin>>arr3;
//	cout<<arr3<<endl;
	

	//short way to solve the same thing
	
	//inbulit function 
	
	char arr6[100];
	cin.getline(arr6,100);      //..
	//cout<<arr6<<endl; 
	
	
	//printing array
	
	for(int i=0;arr6[i]!='\0';i++){
		cout<<arr6[i];
	}
	cout<<endl;
	//basically null means kuch nahi character arrays jab tak kaam krega jab tak character array ko null nhi milega "\0" -> that means null  
	return 0;
}
