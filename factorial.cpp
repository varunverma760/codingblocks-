#include<iostream>
using namespace std;



int main()
{
	int no;
	cin>>no;
	int ans=1;	
	for(int i=1;i<=no;i++){
		ans=ans*i;
	}
	cout<<"factorial is"<<"  "<<ans<<endl;

	
	return 0;
}