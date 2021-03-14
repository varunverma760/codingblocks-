#include <iostream>
using namespace std;
float Cube(float);    // function decalration
int main(){
	float num;
	cout<<"Enter a number:"<<endl;
	cin>>num;
	cout<<"The Cube of the number is : "<<Cube(num)<<endl;
	
	return 0;

}
float Cube(float a){        // function cube definition 
	return a*a*a;
}
