#include<bits/stdc++.h>
using namespace std;
bool isSorted(vector<int>& arr,int i)
{
    if(i == arr.size())
    {
        return true;
    }
    if(arr[i] > arr[i + 1])
    {
        return false;
    }
    return isSorted(arr,i+1);
}
int main()
{
    vector<int>arr = {1 , 4 , 3 , 5 , 6};
    bool check = false;
    if(isSorted(arr,0))
    {
       check = true;
    }
    cout << check; 
    return 0;
}