#include <iostream>
#include <cstring>
using namespace std;
bool isalphabet(char ch)
{
    if((ch>='a' && ch<='z') || ch>='A' && ch<='Z')
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main() {
    string s="a-bC-dEf-ghIj";
    int i=0;
    int start=0;
    int end=s.length()-1;
    while(start<=end)
    {
        if(isalphabet(s[start]) && isalphabet(s[end]))
        {
        swap(s[start],s[end]);
        start++;
        end--;
        }
        else if(isalphabet(s[start])==false)
        {
            start++;
        }
        else
        {
            end--;
        }
    }
    cout<<s;
    return 0;
}