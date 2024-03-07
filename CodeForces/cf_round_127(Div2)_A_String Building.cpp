#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {

        string s;
        int flag=1;
        cin>>s;

        if(s.size()<=1)
        {
            cout<<"NO"<<endl;
        }else
        {

            for(int i=0;i<s.size();i++)
            {

                int same=1;

                while(s[i]==s[i+1] && i+1<s.size())
                {
                    same++;
                    i++;
                }

                if(same<=1)
                {
                    flag=0;
                    cout<<"NO"<<endl;
                    break;
                }

            }

            if(flag)
            {
                cout<<"YES"<<endl;
            }

        }

    }


    return 0;
}
