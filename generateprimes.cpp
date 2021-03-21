#include<iostream>
using namespace std;
void primes(int no){
	for(int n =2;n<=no;n++){
		int i=2;
		while(i<=n-1){
			if(n%i==0){


				break;


			}
			i++;


		}

		if(i==n){
			cout<<n<<" ";
		}
	}

}
int main(){

	int n,no;
	cin>>no;
	primes(no);
	 cout<<endl;




return 0;
}