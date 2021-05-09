#include<iostream>
using namespace std;
int sol[100][100]={0};
bool ratinamaze(char maze[][10],int i,int j,int m,int n){
	//base case
	if(i==n-1&&j==m-1){
		sol[i][j]=1;
		for(int k=0;k<n;k++){
			for(int l=0;l<m;l++){
				cout<<sol[k][l]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		//return true;
		return false;  //we are teling the compiler that we did not get a path even after having one
		               //so it will print all the possible paths

	}
	//recursive case
	sol[i][j]=1;  //puts 1 at current position

	//check for path towards right
	if(j+1<m&&maze[i][j+1]!='X'){
		bool kyarightsepathexistkartahai=ratinamaze(maze,i,j+1,m,n);
		if(kyarightsepathexistkartahai==true){
			return true;
		}
	}

	//check for path in downwards direction
	if(i+1<n&&maze[i+1][j]!='X'){
		bool kyaneechesepathexistkartahai=ratinamaze(maze,i+1,j,m,n);
		if(kyaneechesepathexistkartahai==true){
			return true;
		}
	}
	sol[i][j]=0;
	return false;

}
int main(){
	char maze[][10]={
		"0000",
		"00XX",
		"0000",
		"XX00"
	};
	int m=4,n=4; //m denotes columns and n denotes rows
	bool ans=ratinamaze(maze,0,0,m,n);
	if(ans==false){
		cout<<"path doesn't exist"<<endl;
	}
	return 0;
}