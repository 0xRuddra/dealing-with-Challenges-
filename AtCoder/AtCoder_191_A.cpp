#include<bits/stdc++.h>
using namespace std;

int input()
{
    int x;
    cin>>x;
    return x;
}

int main()
{
    int v,t,s,d;
    v=input();
    t=input();
    s=input();
    d=input();

    if(d<v*t || d>v*s)
    {
        cout<<"Yes"<<endl;
    }else
    {
        cout<<"No"<<endl;
    }



    return 0;
}
