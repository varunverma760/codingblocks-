#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	//uper wala pattern
	for(int row=1;row<=(n+1);row++){
		//number dec n to n-1
		for(int i=n;i>=(n-row)+1;i--)
			cout<<i<<" ";
		//spaces
		for(int i=1;i<=2*(n-row)+1;i++)
		cout<<"  ";

		//dec order numbers 
		for(int i=(n-row)+1;i<=n;i++){

			if(i !=0) 
			


			cout<<i<<" ";
		


		}	








			cout<<endl;
		
		}
		// neche wala pattern 
		for(int row=1;row<=n;row++){
			//numbers dec order mein print ho rhae hai 
			for(int i=n;i>=row;i--)
				cout<<i<<" ";
				// duble spaces 
				for (int i = 1;i<=2*row-1;i++ )
					cout<<"  ";
				
				
				
					/* code */
				
				//numbers inc order mein print ho rahe hai -row to n
				for(int i=row;i<=n;i++)
					cout<<i<<" ";
				

				cout<<endl;


				

			
		}	

	
	return 0;
}