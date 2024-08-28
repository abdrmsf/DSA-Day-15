  #include<iostream>
  #include<vector>
  #include<cmath>
  #include<algorithm>
  #include<limits.h>
  using namespace std;
  int main()
  {
    vector<string>strs{"flower","flow","flight"};
    int i=0;
    string ans="";
    while(true)
    {
        char curr_ch=0;
        for(auto str : strs)
        {
            if(i>=str.size())
            {
                curr_ch=0;
                break;
            }
            if(curr_ch==0)
            {
                curr_ch=str[i];
            }
            else if(curr_ch!=str[i])
            {
                curr_ch=0;
                break;
            }
        }
        if(curr_ch==0)
        {
            break;
        }
        ans.push_back(curr_ch);
        i++;
    }
    cout<<ans<<endl;
  }  
    
    
    
        