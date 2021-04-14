#include<iostream>
using namespace std;
int main(){
	
	char arr[100];
	
	char ch;
	
	int n;
	cin>>n;
	//ch=cin.get();
	cin.ignore();  // ignore 1 character
	cin.getline(arr,100);
	cout<<n<<endl;
	cout<<arr<<endl;
	
	
	
	return 0;
	
}
