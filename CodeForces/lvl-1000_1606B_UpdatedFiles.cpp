//https://codeforces.com/problemset/problem/1606/B

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int tc;
    cin>>tc;
    while(tc--)
    {
        long long int n,k;
        long long int x,y;
        long long int hourCount=0;
        long long int com=1;
        cin>>n>>k;
        while(com<k)
        {

            com=com*2;
            hourCount++;

        }
        if(com<n)
        {
            x=(n-com);
            y=x/k;

            if(x%k==0)
            {
                hourCount=hourCount+y;
            }
            else
            {
                hourCount=hourCount+y+1;
            }
               cout<<hourCount<<endl;
        }else{

           cout<<hourCount<<endl;

        }





    }
    return 0;

}
