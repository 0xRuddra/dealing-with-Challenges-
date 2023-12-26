#include<bits/stdc++.h>
using namespace std;

void input(int *n, int *k)
{
    cin>>*n>>*k;
}

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,k;
        input(&n,&k);

        if(k==0)
        {
            for(int i=n; i>0; i--)
            {
                cout<<i<<" ";
            }
        }
        else if(k==n-1)
        {
            for(int i=1; i<=n; i++)
            {
                cout<<i<<" ";
            }
        }else
        {
            for(int i=1;i<=k;i++)
            {
                cout<<i<<" ";
            }
            for(int i=n;i>k;i--)
            {
                cout<<i<<" ";
            }
        }


    }


    return 0;
}
