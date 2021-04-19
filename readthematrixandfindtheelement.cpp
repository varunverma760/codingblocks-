#include<iostream>
using namespace std;
int main(){
	int arr[100][100];
	int rows,cols;
	cout<<"Enter the value of rows and cols "<<endl;
	cin>>rows>>cols;
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			cin>>arr[i][j];
		}
	}
/*	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			cout<<arr[i][j];
		}
		cout<<endl;
	
	}*/
	int target,i,j;
	cout<<" Enter the value of the target"<<endl;
	cin>>target;
	for( i=0;i<rows;i++){
		for( j=0;j<cols;j++){
			if(target==arr[i][j]){
				cout<<target<<"   Target found at index  " <<i<<" "<<j<<endl;
				
				
			//	return 0;
				break;
			}
		}
		if(j!=cols){
			break;
		}
	}

	if(i ==rows){
		cout<<"Target is not found"<<endl;
	}
	
	
	
	
	
	
	return 0;
}
