#include <iostream>
#include <vector>
using namespace std;
int main(){
	//syntax
	
	//vector<datatype> vector name;
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	
	
	/*cout<<"size of vector is : "<<" "<<v.size()<<endl;
	cout<<"capacity of the vector is :"<<" "<<v.capacity()<<" "<<endl;*/
	
/*	for(int i =0; 12; ++i){
		
		cin>>v[i];
		
	}
	
	cout<<endl<<endl;
	*/
	
	cout<<"size of vector is : "<<" "<<v.size()<<endl;
	cout<<"capacity of the vector is :"<<" "<<v.capacity()<<" "<<endl;
	
	v.pop_back();
	v.pop_back();
	v.pop_back();
	
	cout<<endl;
	
	cout<<"size of vector is : "<<" "<<v.size()<<endl;
	cout<<"capacity of the vector is :"<<" "<<v.capacity()<<" "<<endl;
	
	
	/*for(int i =0;i<10;++i){
		cout<<v[i]<<" ";
	}
	cout<<endl;*/
	
	
	return 0;
}
