#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i=2;i<=n-1;i++){
		if(i%n==1){
			break;

		}
		

		if(i==n){
			cout<<i<<endl;
		}
		cout<<endl;
	}
	return 0;
}