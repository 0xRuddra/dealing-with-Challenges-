//https://codeforces.com/problemset/problem/1521/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
       long long  int a,b;
       long long int x,y,z;
        cin>>a>>b;

        if(b==1)
        {
            cout<<"NO"<<endl;
        }else
        {
            cout<<"YES"<<endl;
            x=(a*b);
            y=a;
            z=(a*b)+a;
            cout<<x<<" "<<y<<" "<<z<<endl;
        }

    }

    return 0;
}
