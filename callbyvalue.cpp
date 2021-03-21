#include<iostream>
using namespace std;
void update(int x){
	x=x+1;  //update
	cout<<"the value of a update is : "<<x<<endl;
}


int main(){


	int a =10;
	cout<<"The value of a is "<<a<<endl;
	update(a);
	

	return 0;


}