#include <iostream>
using namespace std;
float area(float);
int main(){
	float num;
	cout<<"Enter the value of the area :"<<endl;
	cin>>num;
	cout<<"The area of the sqaure is :  "<<area(num)<<endl;
	return 0;

}
float area(float side){
	return side*side;
}