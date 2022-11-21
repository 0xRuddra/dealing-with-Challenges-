#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    map<string,int>score;
    map<string,int>:: iterator it;
    vector<int>winnerScore;
     int mxItem;


    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        if(score[s]==0)
        {
            score[s]=1;

        }
        else
        {
            score[s]++;

        }



    }


for(auto it:score)
{
   winnerScore.push_back(it.second);
}
mxItem=*max_element(winnerScore.begin(),winnerScore.end());
//cout<<mxItem<<endl;

 for(auto it:score)
 {
     if(it.second==mxItem)
     {
         cout<<it.first<<endl;
     }
 }



return 0;
}
