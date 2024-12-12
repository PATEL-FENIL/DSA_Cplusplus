#include<bits/stdc++.h>
using namespace std;
int helper(int n)
{
    if(n == 1)
    {
        return 1;
    }
    return n + helper(n - 1);
}
int main()
{
    int n;
    cout << "Enter the number for sum "<<endl;
    cin >> n;
    int sum = helper(n);
    cout << "The sum of entered number is " << endl;
    cout << sum ;
    return 0;
}