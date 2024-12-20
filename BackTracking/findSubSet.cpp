#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
  void findSubSet(string str,string ans,int i)
  {
    if(i == str.length())
    {
        cout << ans << endl;;
        return;
    }
    findSubSet(str , ans+str[i] , i+1);
    findSubSet(str , ans , i + 1);
  }
};
int main()
{
    string str = "abc";
    Solution s;
    s.findSubSet(str,"",0);
    return 0;
}