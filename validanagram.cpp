#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<limits.h>
using namespace std;
int main()
{
string s="anagram";
string t="nagaram";
int freqtable[256]={0};
for(int i=0;i<s.length();i++)
{
    freqtable[s[i]]++;
}
for(int i=0;i<t.length();i++)
{
    freqtable[t[i]]--;
}
for(int i=0;i<256;i++)
{
    if(freqtable[i]!=0)
    {
        cout<<"Not a valid anagram"<<endl;
    }
}
cout<<"A valid anagram"<<endl;
}
