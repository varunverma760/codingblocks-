#include<iostream>
using namespace std;
 void printtable(int ival,int fval,int step){
 	for(int f=ival;f<=fval;f=f+step){
 		int cel((5/9.0)*(f-32));

 		//int cel=((5)*(f-32))/9;

 		cout<<f <<" "<<cel<<endl;
 	}
 

 }


int main(){
int ival,fval,step;
cout<<"enter the value of iva,fval and step"<<"  "<<endl;
cin>>ival>>fval>>step;
printtable(ival,fval,step);

return 0;
}