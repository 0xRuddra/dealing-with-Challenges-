//https://codeforces.com/problemset/problem/131/A

#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s;


    cin>>s;
    //transform(s.begin(),s.end(),s.begin(), ::tolower);
    for(int i=0; i<s.length(); i++)
    {
        if((s[0]>='a' && s[0]<='z') && (s.size()==1) )
        {
            cout<<(char)toupper(s[0])<<endl;
        }
        else if((s[0]>='a' && s[0]<='z') && (s[i]>='A' &&s[i]<='Z'))
        {
            int firstElemnt=1;
            transform(s.begin(),s.end(),s.begin(), ::tolower);
            if(firstElemnt)
            {
                cout<<(char)toupper(s[0]);
                firstElemnt=0;
            }
            else
            {
                cout<<s[i];
            }

        }
        else if((s[i]>='A' &&s[i]<='Z'))
        {
            int firstElemnt=1;
            transform(s.begin(),s.end(),s.begin(), ::tolower);
            if(firstElemnt)
            {
                cout<<(char)toupper(s[0]);
                firstElemnt=0;
            }
            else
            {
                cout<<s[i];
            }


        }
        else if(s[i]>='a' && s[i]<='z')
        {
            int firstElemnt=1;
            transform(s.begin(),s.end(),s.begin(), ::tolower);
            if(firstElemnt)
            {
                cout<<(char)toupper(s[0]);
                firstElemnt=0;
            }
            else
            {
                cout<<s[i];
            }

        }
        else
        {


            cout<<s<<endl;
        }



    }
    cout<<endl;
    return 0;
}
