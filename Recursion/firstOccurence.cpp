#include<bits/stdc++.h>
using namespace std;
int helper(vector<int>& arr,int idx,int key)
{
    if(idx == arr.size() )
    {
        return -1;
    }
    if(arr[idx] == key)
    {
        return idx;
    }
    return helper(arr,idx+1,key);
}
int main()
{
    vector<int>arr = {1,2,2,3,4,5};
    int key = 2;
    int firstOccure = helper(arr,0,key);
    cout << "The first ocurrence of " << key << " at index "<<firstOccure;
    return 0;
}