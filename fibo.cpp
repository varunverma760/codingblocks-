#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int ffn=0,sfn=1;
	if(n==ffn||n==sfn){
		cout<<"yes it is a part of fibo series "<<endl;
		return 0;
	}
	int c=ffn+sfn;
	while(c<=n){
		if(c==n){
			cout<<"Yes exists in fibo series "<<endl;
			return 0;
		}
		ffn=sfn;
		sfn=c;
		c=ffn+sfn;
	}
	cout<<"No it is not a part of fibo series"<<endl;
	
	
	return 0;
}