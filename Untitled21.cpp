/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int binarysearch(int a[],int n,int key){
    
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid=(s+e)/2;
        
        if(a[mid]==key){
            
            return mid;
                
        }
        if(a[mid]>key){
            e=mid-1;
        }
        else{
            
            s=mid+1;
        }
    
        
        
        
    }
    
    
}

int main()
{
    int a[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
    cout<<"Enter the value  of key"<<endl;
    cin>>key;
    
    int x=binarysearch(a,n,key);
    cout<<"key is found"<<x<<endl;

    return 0;
}

