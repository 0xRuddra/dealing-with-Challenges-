#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,m;
        int totalGrid;
        int isDivisible;
        cin>>n>>m;
        totalGrid=n*m;
        isDivisible=totalGrid%3;
        if(isDivisible==0)
        {

            cout<<(totalGrid/3)<<endl;
        }else{

            cout<<(totalGrid/3)+1<<endl;
        }

    }


    return 0;
}
