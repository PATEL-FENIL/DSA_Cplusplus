#include<bits/stdc++.h>
using namespace std;
void helper(int n)
{
    if(n == 1)
    {
        cout << 1 << " ";
        return;
    }
    cout << n << " ";
    helper(n - 1);
}
int main()
{
    int n;
    cout << "Enter a number "<<endl;
    cin >> n;
    helper(n);
    return 0;
}