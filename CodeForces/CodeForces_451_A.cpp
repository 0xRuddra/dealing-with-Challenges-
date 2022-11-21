
#include<bits/stdc++.h>
using namespace std;
int  main()
{
    int n,m;
    cin>>n>>m;
    if(n<=m)
    {
        if(n%2==1)
        {
            cout<<"Akshat"<<endl;
        }else
        {
            cout<<"Malvika"<<endl;
        }
    }else if(n>m)
    {
       if(m%2==1)
        {
            cout<<"Akshat"<<endl;
        }else
        {
            cout<<"Malvika"<<endl;
        }
    }


    return 0;
}
