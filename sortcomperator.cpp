#include <iostream>
#include <algorithm>
using namespace std;
int main()
{	
	int a[]={4,2,87,24,12};
	int n=sizeof(a)/sizeof(n);
	cout<<"before sorting  :";
	for(int i=0;i<n;i++){
		cout<<a[i]<<"  ";
	}
	cout<<endl;


	sort(a,a+n);

	cout<<"after sorting :";  


	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;

	return 0;
}