#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    if((x>=100)&&(x/100==0))
    {
        cout<<100<<endl;

    }else
    {
        int tmp=x%100;

        int result=100-tmp;
        cout<<result<<endl;
    }

    return 0;
}
