

//https://codeforces.com/problemset/problem/709/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,b,d;
    cin>>n>>b>>d;
    int result=0,sum_of_org=0;
    int sz[n];
    for(int i=0;i<n;i++)
    {
        cin>>sz[i];
    }

    for(int i=0;i<n;i++)
    {
        if(sz[i]<=b)
        {
            sum_of_org=sum_of_org+sz[i];
        }

        if(sum_of_org>d)
        {

            result++;
            sum_of_org=0;
        }

    }
    cout<<result<<endl;



    return 0;
}

