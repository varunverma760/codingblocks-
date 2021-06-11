#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector <int> arr={1,2,3,4,15};
	//size of teh vectors
	arr.pop_back();

	//Push_back 0(1)
	arr.push_back(16);
	//print all the elements
	for(int i=0;i<arr.size();i++){
		cout<<arr[i]<<endl;
	}
	
	// cout<<arr.size()<<endl;
	
	// //capacity

	// cout<<arr.capacity()<<endl;



	return 0;
}