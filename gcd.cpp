#include <iostream>
#define ll long long 
using namespace std;
int main()
{	
	//gcd 
	ll int n1,n2;
	cin>>n1>>n2;
	//logic
	ll int divident, divisor,remainder;
	divident =max(n1,n2);
	divisor=min(n1,n2);
	while(divident%divisor !=0){ 
		remainder=divident %divisor;
		divident=divisor;
		divisor=remainder;
}
cout<<divisor;
cout<<endl; 

	
	return 0;
}
