#include <iostream>
using namespace std;
int main(){
	int age[5];
	int sum=0;
	for(int i=0;i<=5;i++){
		cout<<"Enter the person "<<" "<<i+1<<" "<<"age :"<<endl;
		cin>>age[i];
	}
	for( int i=0;i<5;i++)
		sum+=age[i];
	cout<<"Average age ="<<sum/5;
	return 0;
}