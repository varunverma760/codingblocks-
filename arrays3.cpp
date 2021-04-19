#include<iostream>
using namespace std;
int main(){
	
	int arr[100][100];
	int rows,cols;
	cin>>rows>>cols;
	
for(int i=0;i<rows;i++){
	for(int j=0;j<cols;j++){
		
			cout<<arr[i][j]<<" ";
	}
		
		
		//cout<<endl;

	}
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			cout<<arr[i][j]<<" ";
		
		}
		cout<<endl;
	}
	return 0;
	

}
	

