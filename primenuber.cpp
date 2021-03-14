#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int n,m,flag=0;
    cout<<"Enter the Value of n"<<endl;
    cin>>n;
    m=n/2;
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"Not Prime"<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"Prime"<<endl;
    }

    return 0;
}
