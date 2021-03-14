#include <iostream>
using namespace std;
int main(){
	int arr[3],avg=0,total=0;
	for(int i=0;i<3;i++){
		cout<<"Enter the salary for the day : "<<i+1<<endl;
		cin>>arr[i];
		total+=arr[i];

	}
	avg=total/3;
	cout<<"The total salary is  : "<<total<<endl;
	cout<<"The average salary is :"<<avg<<endl;

	return 0;
}