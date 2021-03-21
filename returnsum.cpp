#include<iostream>
using namespace std;
int sumoftwonumbers(int a, int b){
	int sum = a+b;
	//cout<<"Sum is:"<<endl;
	return sum;
}
int main(){
	int x,y;
	cout<<"Enter two numbers"<<endl;
	cin>>x>>y;

	cout<<"sum is:"<<sumoftwonumbers(x,y)<<endl; 			// it is not necessary to decalre the same names in the function declaration as theya re in function calling 
	
	return 0;

}