#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        long long int x,y,a,b;
        long  long int cost=0;
        cin>>x>>y>>a>>b;
        if(x==0 && y==0)
        {
            cout<<cost<<endl;

        }else{

            if(x!=y)
            {
                int diff=abs(x-y);

                cost=(diff*a);
                if(2*a <b)
                {

                    cost=cost+(2*a*min(x,y));
                }else{
                    cost=cost+(b*min(x,y));
                }

            }else{
                 if(2*a<b)
                {

                    cost=(2*a*x);
                }else{
                    cost=(b*x);
                }

            }
             cout<<cost<<endl;

        }

    }



    return 0;
}
