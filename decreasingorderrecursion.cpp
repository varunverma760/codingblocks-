#include<iostream>
using namespace std;
void dec(int n){
//base case
	//if(n==0){
		
	//	 return ;	
		
	//}
	if(n==1){
		cout<<1<<endl;
		return ;
	} 
	 
 //recursive case
	cout<<n<<endl;	
	dec(n-1);
}
int main(){
	int n;
	cin>>n;
	dec(n);
	
	
	
	
	return 0;
	
}
