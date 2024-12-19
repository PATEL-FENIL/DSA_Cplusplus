#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public :
    void changeArr(vector<int>& arr,int idx,int val)
    {
        if(idx == arr.size())
        {
            printArr(arr);
            return ;
        }
        arr[idx] = val;
        changeArr(arr,idx + 1,val + 1);
        arr[idx] = arr[idx] - 2;
    }
   void printArr(vector<int>& arr)
    {
        for(int i = 0 ; i < arr.size() ; i++)
        {
            cout<< arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    vector<int>arr(5,0);
    Solution s;
    s.changeArr(arr,0,1);
    s.printArr(arr);
    return 0;
}
