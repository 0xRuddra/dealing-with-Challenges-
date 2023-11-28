#include<bits/stdc++.h>
using namespace std;
void input(int *a,int *b)
{
    cin>>(*a)>>(*b);

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,output,totalGrid;
        input(&n,&m);

        totalGrid=n*m;

        if(totalGrid%3==0)
        {
            output=totalGrid/3;
        }else if(totalGrid%3==1)
        {
            totalGrid=totalGrid-4;
            output=totalGrid/3 + 2;
        }else if(totalGrid%3==2)
        {
            totalGrid=totalGrid-2;
            output=totalGrid/3 + 1;
        }

        cout<<output<<endl;

    }



    return 0;
}
