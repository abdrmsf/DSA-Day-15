// Online C++ compiler to run C++ program online
#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;
string expandaroundindex(string s,int left,int right)
{
    while(left>=0 && right<s.length() && s[left]==s[right])
    {
        left--;
        right++;
    }
    return s.substr(left+1,right-left-1);
}
int main()
{
    string s="aaa";
    string ans="";
    string oddstr="";
    string evenstr="";
    int i=0;
    while(i<s.length())
    {
        oddstr=expandaroundindex(s,i,i);
        evenstr=expandaroundindex(s,i,i+1);
        if(oddstr.length()>evenstr.length() && oddstr.length()>=ans.length())
        {
            ans=oddstr;
        }
        else if(evenstr.length()>oddstr.length() && evenstr.length()>ans.length())
        {
            ans=evenstr;
        }
        i++;
    }
    cout<<ans;
}

