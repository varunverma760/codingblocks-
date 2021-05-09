#include <vector>
#include <iostream>
using namespace std;
long long possibleStrings(int n, int r, int b, int g)
{
  vector<long long> fact(n + 1);

    fact[0] = 1;
    for (long long i = 1; i <= n; i++)
    {
        fact[i] = fact[i - 1] * i;
    }

    //  To store the count of possible strings.
    long long ans = 0;

    for (int i = r; i <= n; i++)
    {
        for (int j = b; j <= n; j++)
        {
            //  Denotes the count of 'G's in the string.
            int k = n - i - j;
            if (k >= g)
            {
                ans = ans + (fact[n]) / (fact[i] * fact[j] * fact[k]);
            }
        }
    }

    return ans;
}
    
int main()
{
	int n;
	cout<<"Enter the value of n"<<endl;
	cin>>n;
	int r;
	cout<<"Enter the value of r"<<endl;
	cin>>r;
	int g;
	cout<<"Enter the value g"<<endl;
	cin>>g;
    int b;
	cout<<"Enter the value of b"<<endl;
	cin>>b;
	possibleStrings(n,r,g,b);
	cout<<possibleStrings(n,r,g,b)<<endl;
	return 0;
}