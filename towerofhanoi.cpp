#include <iostream>
using namespace std;
void toh(int n,char src, char helper,char dest){
	
	//base case
	if(n==0){
		
		return ;
		
	}	
	
	
	//recursive case
	
	toh(n-1,src,dest,helper);
	cout<<"Take"  <<n<< "disc from "<<src<<" to destination"<<dest<<endl;
	toh(n-1,helper,src,dest);
	
	
	
}
int main(){
	int n;
	cin>>n;
	toh(n,'A','B','C');
	
//	cout<<toh<<endl;
	
	
	return 0;
}
