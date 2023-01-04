#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,k;
        int check=0;
        //n no of elements and k no of subarray.
        cin>>n>>k;
        int ary[n];
        for(int i=0;i<n;i++)
        {
            cin>>ary[i];
        }
        if(n==k)
        {
            cout<<"YES"<<endl;
        }else if(k==1)
        {
            for(int i=0;i<n-1;i++)
            {
                if(ary[i]!=ary[i+1])
                {
                    check=1;
                }
            }
        }

        if(check)
        {
            cout<<"NO"<<endl;
        }



    }
    return 0;
}
