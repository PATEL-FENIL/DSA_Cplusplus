#include<bits/stdc++.h>
using namespace std;
int tiling(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }
    int verticalTiles = tiling(n-1);
    int horizontalTiles = tiling(n-2);
    int totalWays = verticalTiles + horizontalTiles;
    return totalWays;
}
int main()
{
    int n;
    cout << "Enter number of tiles you want to place"<<endl;
    cin >> n;
    int numOfWays = tiling(n);
    cout << "For " << n << " tiles number of ways are " << numOfWays;
    return 0;
}