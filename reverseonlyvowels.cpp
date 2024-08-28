#include <iostream>
#include <cstring>
using namespace std;
bool isvowel(char ch)
{
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
        return true;
    }
    if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main() {
    string s="leetcode";
    int start=0;
    int end=s.length()-1;
    while(start<=end)
    {
        if(isvowel(s[start])==false)
        {
        start++;
        }
        if(isvowel(s[end])==false)
        {
        end--;
        }
        else
        {
            swap(s[start],s[end]);
            start++;
            end--;
        }
    }
    cout<<s;
    return 0;
}