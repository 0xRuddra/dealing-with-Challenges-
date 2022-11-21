#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,d,f=0;
    vector<int>x,y;
    cin>>n>>s>>d;
    while(n)
    {
       int a,b;
       cin>>a>>b;
       x.push_back(a);
       y.push_back(b);
       n--;
    }
    for(int i=0;i<x.size();i++)
    {
        if((x[i]<s)&&(y[i]>d))
        {

            f++;

        }

    }
    if(f)
    {
       cout<<"Yes"<<endl;
    }else
    {
        cout<<"No"<<endl;
    }


    return 0;
}
