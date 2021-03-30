#include<iostream>
#include<cstring>
using namespace std;
/*blue print */
class car{
public :
	char name[100];
	int seats;
	int modelno;
	int price;
};
int main(){
	//datatype variable=name;
	car A;
	strcpy(A.name,"BMW");
	A.seats=4;
	A.modelno=2021;
	A.price=20000000;

	cout<<"Name of the car"<<"  "<<A.name<<endl;
	cout<<"Seats of the car"<<"  "<<A.seats<<endl;
	cout<<"Price of the car"<<"  "<<A.price<<endl;
	cout<<"Model no. of the car"<<"  "<<A.modelno<<endl;


}
