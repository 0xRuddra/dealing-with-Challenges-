#include<bits/stdc++.h>
using namespace std;
int main()
{
    int nshop,finalresult;
    cin>>nshop;
    int a[nshop],p[nshop],x[nshop],result[nshop];
    for(int i=0;i<nshop;i++)
    {
        cin>>a[i]>>p[i]>>x[i];
    }
    for(int i=0;i<nshop;i++)
    {
        if(x[i]-a[i]>0)
        {
            result[i]=p[i];
        }
    }
    finalresult=*min_element(result,result+nshop);
    if(finalresult>0)
    {
        cout<<finalresult<<endl;
    }
else
{
    cout<<-1<<endl;
}

    return 0;
}
