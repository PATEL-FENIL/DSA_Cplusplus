#include<bits/stdc++.h>
using namespace std;
int helper(int x,int n)
{
    if(n == 0)
    {
        return 1;
    }
    return x * helper(x,n-1);
}
int main()
{
    int x,n;
    cout << "Enter the number you want to find the power of " << endl;
    cin >> x;
    cout << "Enter the power "<<endl;
    cin >> n;
    int powerOfx = helper(x,n);
    cout << "Power of " << x << " is " << powerOfx;

    return 0;
}