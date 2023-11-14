//https://codeforces.com/contest/1606/problem/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;

    cin>>t;
    while(t--)
    {
        int ab_len=0,ba_len=0,cnt=1;
        string s,new_s="";
        cin>>s;
        for(int i=0; i<s.length()-1; i++)
        {
            if(s[i]=='a' && s[i+1]=='b')
            {
                ab_len++;
            }
            if(s[i]=='b' && s[i+1]=='a')
            {
                ba_len++;
            }
        }

        if(ab_len==ba_len)
        {
            cout<<s<<endl;
        }
        else
        {

        for(int i=0;i<s.length();i++)
        {
            if(s[0]=='a' && cnt==1){
                cout<<'b';
                cnt=0;
                continue;
            }
            if(s[0]=='b' && cnt==1)
            {
                cout<<'a';
                cnt=0;
                continue;
            }
            cout<<s[i];
        }
        cout<<endl;

        }


    }


    return 0;
}

// Explanation:-
//there is a small logic in this problem .
//if the there is same number of a's and same num of b's exist in the string then the substring of ab and ba both are equal.
//but if you see , if the string starts with 'a' then the number of substring 'ab' is larger then ba . in that case if we
//simply change the first 'a' of the string into 'b' then . the equation becomes equal . like:
//aaaaaaaaaaaabbaabbababbb
//here ,ab =4 ,ba=3 . so  if we change the first 'a' into 'b'. then the string will become-
//baaaaaaaaaaabbaabbababbb
//
//on the other hand if the string starts with b then the number of 'ba' is larger than the number of 'ab'. so if we
//simply made the first 'b' into 'a'. then the equation becomes equal in both side.
