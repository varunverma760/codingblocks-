#include<iostream>
using namespace std;
class person{
	int age;
	char name[100];
public:
	void getdata(void);
	void display(void);
};
void person::getdata(void){
	cout<<"Enter the Name of the person"<<endl;
	cin>>name;
	cout<<"Enter the Age  of the person"<<endl;
	cin>>age;
}
void person::display(void){
	cout<<"\n Name :"<<name;
	cout<<"\n Age :"<<age;
}
int main(){
	person p;
	p.getdata();
	p.display();
	cout<<endl;

return 0;

}