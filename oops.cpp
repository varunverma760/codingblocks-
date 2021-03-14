#include<iostream>
#include <cstring>
using namespace std;
class car{
public :
	string name;
	int seats;
	int modelno;
	int price;

	//default constructor 

	car(){
		cout<<" In Default Constructor"<<endl;
		cout<<"DEAN WINCHESTER"<<endl;
	}

};



int main()

{
	//data type varibalname;


	//whenever object is created costructor is called 
	car A; //A is objectof class or 
	A.name ="FORD";
	A.seats=2;
	A.modelno=2021;
	A.price=20000000;
	cout<<"NAME OF THE CAR:"<<A.name<<endl;
	cout<<"MODELNO OF THE CAR:"<<A.modelno<<endl;
	cout<<"SEATS OF THE CAR:"<<A.seats<<endl;
	cout<<"PRICE  OF THE CAR:"<<A.price<<endl;

	cout<<endl<<endl;

	car B;
	B.name=" CHEVY IMPALA";
	B.seats=4;
	B.modelno=1969;
	B.price = 35000;
	cout<<"NAME OF THE CAR:"<<B.name<<endl;
	cout<<"MODELNO OF THE CAR:"<<B.modelno<<endl;
	cout<<"SEATS OF THE CAR:"<<B.seats<<endl;
	cout<<"PRICE  OF THE CAR:"<<B.price<<endl;

	

	return 0;
}
