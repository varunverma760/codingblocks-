#include<iostream>
using namespace std;
int main(){
	int radius=10;
	int *rptr=&radius;
	cout<<"Area of a circle is :";
	cout<<2*3.14*(*rptr)<<endl;
	return 0;
}