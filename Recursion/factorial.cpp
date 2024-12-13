#include<bits/stdc++.h>
using namespace std;
int helper(int n)
{
    if(n == 1)
    {
        return 1;
    }
    return n * helper(n - 1);
}
int main()
{
    int n;
    cout << "Enter a number which you want to find factorial" << endl;
    cin >> n;
    int facto = helper(n);
    cout << "factorial of " << n << " is " << facto;
    return 0;
}