#include<bits/stdc++.h>
using namespace std;
int friendsPairing(int n)
{
    if(n == 1 || n == 2)
    {
        return n;
    }
    return (friendsPairing(n - 1) + ((n - 1) * friendsPairing(n-2)));
}
int main()
{
    int n;
    cout << "Enter the number of friends which are go to party" << endl;
    cin >> n;
    int friends = friendsPairing(n);
    cout << "The number of friend arranges in total ways " << friends << endl;
    return 0;
}