#include<iostream>
using namespace std;
long long possible(int n,int r,int b,int g){
	//store fact up to n
	int fact[n+1];
	fact[0]=1;
	for(int i=0;i<=n;i++){
		fact[i]=fact[i-1]*i;

	}
	//find the remainng values to be added
	int left =n-(r+g+b);
	int sum=0;
	for(int i=0;i<=left;i++){
		for(int j=0;j<=left-i;i++){
			int k=left-(i+j);
			sum=sum+fact[n]/(fact[i+r]*fact[j+b]*fact[k+g]);
		}
	}

	return sum;

}





int main(){
	int n = 4, r = 2;
    int b = 0, g = 1;
	possible(n,r,b,g);
	cout<<possible(n,r,b,g)<<endl;

return 0;
}