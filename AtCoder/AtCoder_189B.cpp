#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,highest=0,cnt=0;
    cin>>n>>x;
    vector<int>v,p;
    for(int i=0;i<n;i++)
    {
        int x,y;
       int temp;
        cin>>x>>y;
        temp=x*y;
      //  cout<<" temp value is "<<temp<<endl;
        v.push_back(temp);

    }
    for(int i=0;i<v.size();i++)
    {
        highest=highest+v[i];
       // cout<<"higest value is "<<highest<<endl;
        cnt++;
        if(highest>x*100)
        {
            cout<<cnt<<endl;
            return 0;
        }

    }
    cout<<-1<<endl;



    return 0;
}
