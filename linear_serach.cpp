
#include <iostream>
using namespace std;

int main()
{
   int arr[100];
   int i=0,n,key;
   cin>>n;
   for(i=0;i<n;i++){
       cin>>arr[i];
   }
   cout<<"Enter the value of key"<<endl;
   cin>>key;
   for(i=0;i<n;i++){
       if (key==arr[i]){
           cout<<"Element found at the index :"<<i<<endl;
           break;
       }
       
   }
    cout << i;
    cout<<"i"<<endl;
    if( i==n){
       cout<<"Element not found"<<endl;
        }
       
  

    return 0;
}
