#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {

        int n;
        cin>>n;
        long long int downValue;
        int x;
        for(int i=2; i<=35; i++)
        {
            downValue=pow(2,i)-1;
            if(n%downValue)
            {
                continue;
            }
            else
            {

                break;
            }
        }
        x=n/downValue;
        cout<<x<<endl;

    }
    return 0;
}

//formula is x*(1+2+4...2^k-1)=n . (1+2+4...+2^k-1)=2^k-1
