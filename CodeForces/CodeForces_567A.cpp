
//https://codeforces.com/problemset/problem/567/A

#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    int closecity,farcity;
    vector<int>v;

    vector<map<int,int>>track;
   // vector<map<int,int>>:: iterator xy;
   // xy=track.begin();

    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }



    for(int i=0;i<n;i++)
    {
        map<int,int>mp;
        int tmp,buckt,frtmp,frbuckt;

        if(i==0 || i==(n-1))
        {
            if(i==0)
            {
                closecity=abs(v[0]-v[1]);
                farcity=abs(v[0]-v[n-1]);
                mp.insert({closecity,farcity});
                track.push_back(mp);
                mp.clear();
            }else
            {
//cout<<" last element "<<endl;
               closecity=abs(v[n-1]-v[n-2]);
               farcity=abs(v[n-1]-v[0]);
            //   cout<<closecity<<" "<<farcity<<endl;
               mp.insert({closecity,farcity});
               track.push_back(mp);
               mp.clear();
            }
        }else
        {
            tmp=abs(v[i]-v[i-1]);
            buckt=abs(v[i]-v[i+1]);
            if(tmp<buckt)
            {
                closecity=tmp;
            }else{
                closecity=buckt;
            }
            frtmp=abs(v[i]-v[0]);
            frbuckt=abs(v[i]-v[n-1]);
            if(frtmp>frbuckt)
            {
                farcity=frtmp;
            }else
            {
                farcity=frbuckt;
            }
            mp.insert({closecity,farcity});
            track.push_back(mp);
            mp.clear();


        }
       /* cout<<endl;
        for(auto xy:track[i])
        {
            cout<<" elements "<<xy.first<<" "<<xy.second<<endl;
            break;
        }*/


    }
   // cout<<endl;
 for(int i=0;i<n;i++)
    {
        for(auto it:track[i])
        {
            cout<<it.first<<" "<<it.second<<endl;
            break;
        }
    }



    return 0;
}
