#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int two,one;
    int minStepNum;
    if(n%2!=0)
    {
        two=n/2;
        one=1;
    }
    else
    {

        two=n/2;
        one=0;
    }

    int totalStepN=two+one;
    //cout<<totalStepN<<" -totalStepN"<<endl;

    if(n>=m)
    {

        if(totalStepN%m==0 )
        {
            minStepNum=totalStepN;
            //cout<<minStepNum<<" -minimumStepNum"<<endl;
            cout<<minStepNum<<endl;
            return 0;

        }
        else
        {

            int x=totalStepN%m;
            // cout<<x<<y<<" y,x"<<endl;
            minStepNum=totalStepN+(m-x);
            //cout<<minStepNum<<" -minimumStepNum"<<endl;
            cout<<minStepNum<<endl;

            return 0;

        }

    }else{

    cout<<-1<<endl;
    return 0;

    }






    return 0;
}
