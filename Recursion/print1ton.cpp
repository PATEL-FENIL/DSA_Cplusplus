#include<bits/stdc++.h>
using namespace std;
void helper(int n)
{
    if(n == 1)
    {
        cout << 1 << " ";
        return;
    }
    helper(n - 1);
    cout << n << " ";
}
int main()
{
    int n;
    cout << "Enter a number which you to print series"<<endl;
    cin >> n;
    helper(n);
    return 0;
}