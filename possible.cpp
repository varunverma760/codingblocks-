#include <iostream>
using namespace std;
int possibleStrings( int n, int r, int b, int g)
{
    // Store factorial of numbers up to n
    // for further computation
    int fact[n+1];
    fact[0] = 1;
    for (int i = 1; i <= n; i++)
        fact[i] = fact[i-1] * i;
 
    // Find the remaining values to be added
    int left = n - (r+g+b);
    int sum = 0;
 
    // Make all possible combinations
    // of R, B and G for the remaining value
    for (int i = 0; i <= left; i++)
    {
        for (int j = 0; j<= left-i; j++)
        {
            int k = left - (i+j);
 
            // Compute permutation of each combination
            // one by one and add them.
            sum = sum + fact[n] /
                       (fact[i+r]*fact[j+b]*fact[k+g]);
        }
    }
    return sum;
}
int main(){
    int n = 4, r = 2;
    int b = 0, g = 1;
    possibleStrings(n,r,b,g);
    cout<<possibleStrings(n,r,b,g)<<endl;

return 0;
}