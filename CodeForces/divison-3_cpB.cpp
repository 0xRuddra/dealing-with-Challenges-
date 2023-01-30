#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,s,r;
        cin>>n>>s>>r;
        int withOutLastElm =n-1;
        int a[withOutLastElm];

        int sum=0;
        int z=s-r;
        for(int i=0; i<withOutLastElm; i++)
        {
            a[i]=1;
            sum=sum+1;
        }
        int tmpSum=sum;
        int checkpoint=r-sum;
//        cout<<"sum is "<<tmpSum<<endl;
//        cout<<" check point is "<<checkpoint<<endl;
//        cout<<"z is "<<z<<endl;
//        cout<<" r is "<<r<<endl;

        if(checkpoint<=withOutLastElm)
        {
            for(int i=0; i<withOutLastElm; i++)
            {
                for(int j=a[i]; j<z; j++)
                {
//                    cout<<"a[i] is "<<a[i]<<" i is "<<i<<endl;
//                    cout<<"tmp sum is "<<tmpSum<<endl;
                    if(tmpSum==r)
                    {
                        break;
                    }
                    else
                    {
                        a[i]=a[i]+1;
                        tmpSum=tmpSum+1;
                    }


                }
                if(tmpSum==r)
                {

                    break;
                }else
                {
                    continue;
                }
            }
        }else if(checkpoint>withOutLastElm)
        {
             for(int i=0; i<withOutLastElm; i++)
            {
                for(int j=a[i]; j<z; j++)
                {
//                    cout<<"a[i] is "<<a[i]<<" i is "<<i<<endl;
//                    cout<<"tmp sum is "<<tmpSum<<endl;
                    if(tmpSum==r)
                    {
                        break;
                    }
                    else
                    {
                        a[i]=a[i]+1;
                        tmpSum=tmpSum+1;
                    }


                }
                if(tmpSum==r)
                {

                    break;
                }else
                {
                    continue;
                }
            }


        }

        for(int i=0; i<withOutLastElm; i++)
        {
            cout<<a[i]<<" ";
        }

        cout<<z<<endl;
        //cout<<"nxt"<<endl;

    }
    return 0;
}
