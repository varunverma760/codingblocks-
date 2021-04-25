#include<iostream>
using namespace std;
int minto1(int n){
	// base case 
	if(n==1){
		return 0;
	}



	// recursive case
	int op1,op2,op3;
	op1=op2=op3=INT_MAX;
	op3=minto1(n-1);

	if(n%3==0){
		op1=minto1(n/3);
	}
	if(n%2==0){
		op2=minto1(n/2);

	}

	
	return min(op1,min(op2,op3))+1; //min(2 arguments)

}

//topdown
int topdownminto1(int n,int*dp){
	// base case 
	if(n==1){
		return dp[n]=0;
	}


	// calculate karne se pehle check
	if(dp[n]!=-1){
		return dp[n];
	}

	// recursive case
	int op1,op2,op3;
	op1=op2=op3=INT_MAX;
	op3=topdownminto1(n-1,dp);

	if(n%3==0){
		op1=topdownminto1(n/3,dp);
	}
	if(n%2==0){
		op2=topdownminto1(n/2,dp);

	}
	//RETURN SE PEHLE STORE
	
	return dp[n]=min(op1,min(op2,op3))+1; //min(2 arguments)

}
int main(){
	int n;
	cin>>n;
	
	int *dp=new int[n+1];
	for (int i = 0; i <=n; ++i)
	{
		dp[i]=-1;
	}
	cout<<topdownminto1(n,dp)<<endl;
	cout<<minto1(n)<<endl;
	
	
	
	
	return 0;
}
