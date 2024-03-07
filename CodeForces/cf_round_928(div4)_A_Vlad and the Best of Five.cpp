#include<bits/stdc++.h>
using namespace std;



int main()
{
    int tc;
    cin>>tc;

    while(tc--)
    {
        int result[2]= {0};
        string s;
        cin>>s;
        for(int i=0;i<5;i++)
        {
            if(s[i]=='A')
            {
                result[0]++;
            }else
            {
                result[1]++;
            }
        }
        if(result[0]>result[1])
        {
            cout<<'A'<<endl;
        }
        else
        {
            cout<<'B'<<endl;
        }

    }





    return 0;
}
