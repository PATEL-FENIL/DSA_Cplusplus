#include<bits/stdc++.h>
using namespace std;
void helper(string &str,int idx,string &newStr,vector<bool>&map)
{
    if(idx == str.length())
    {
        cout << newStr << endl;
    }
    char currChar = str.at(idx);
    if(map[currChar - 'a'] == true)
    {
        helper(str,idx+1,newStr,map);
    }
     {
        map[currChar - 'a'] = true;
        newStr.push_back(currChar); // Corrected line
        helper(str, idx + 1, newStr, map);
        newStr.pop_back(); // Backtracking step to restore the original state
    }
}
int main()
{
    string str = "apannacollege";
    string newStr = "";
    vector<bool>map(26,false);
    helper(str,0,newStr,map);
    return 0;
}