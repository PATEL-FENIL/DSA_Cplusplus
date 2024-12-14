#include<bits/stdc++.h>
using namespace std;
int lastOccurence(vector<int>& arr,int idx,int key)
{
    if(idx == arr.size())
    {
        return -1;
    }
    int isFound = lastOccurence(arr , idx + 1 , key);
    if(isFound == -1 && arr[idx] == key)
    {
        return idx;
    }
    return isFound;
}
int main()
{
    vector<int>arr = {1,2,2,3,4,5};
    int key = 2;
    int lastOccure = lastOccurence(arr,0,key);
    cout << "The last ocurrence of " << key << " at index "<<lastOccure;
    return 0;
}