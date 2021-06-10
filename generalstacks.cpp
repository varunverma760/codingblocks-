#include <iostream>
#include<vector>
using namespace std;
template<typename U>
class Stack{
	vector<U>v;
public:
	U top(){
		return v[v.size()-1];
	}
	void push(U data){
		v.push_back(data);
	}
	void pop(){
		v.pop_back();

	}
	int size(){
		return v.size();
	}
	bool empty(){
		return v.size()==0;
	}
};
int main(){
	Stack<int>s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(5);
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
	return 0;
}