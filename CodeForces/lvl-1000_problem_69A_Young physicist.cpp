#include<bits/stdc++.h>
using namespace std;
int main()
{
    int xAxis,yAxis,zAxis;
    int xAxisForce=0,yAxisForce=0,zAxisForce=0;

    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>xAxis>>yAxis>>zAxis;
        xAxisForce=xAxisForce+xAxis;
        yAxisForce=yAxisForce+xAxis;
        zAxisForce=zAxisForce+zAxis;
    }

    if(xAxisForce==0 && yAxisForce==0 && zAxisForce==0)
    {
        cout<<"YES"<<endl;
    }else
    {
        cout<<"NO"<<endl;
    }



    return 0;
}
