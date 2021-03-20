#include <iostream>
using namespace std;
void isevenorodd( int n){
	if(n%2==0){
		cout<<n<<	"It is even "<<endl;
	}
	else{
		cout<<n<<	"It is odd"<<endl;
	

	}

}
int main()
{

	int n;
	cin>>n;

	isevenorodd(n);
	
	return 0;
}