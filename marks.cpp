#include <iostream>
using namespace std;
int main(){
	float a,b,c,marks,perc;

	cout<<"Enter the marks of the subjects"<<endl;
	cin>> a >> b >>c;
	marks=a+b+c;
	cout<<"The marks of sub1,sub2 and sub3 :"<<marks<<endl;
	perc=(marks/300)*100;
	cout <<"The percentage of the student is  : "<<perc<<endl;

	return 0;


}