#include<bits/stdc++.h>
using namespace std;

void input(long long int *a , long long int *b, long long int *c)
{
    cin>>*a>>*b>>*c;

}

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        long long int totalParticipant,startTimeInterval,finishingTime;
       vector<long long int>startingTimes;
       vector<long long int>endTimes;

       input(&totalParticipant,&startTimeInterval,&finishingTime);

       for(int i=0;i<totalParticipant;i++)
       {
           startingTimes.push_back(i*startTimeInterval);
       }
       for(int i=0;i<totalParticipant;i++)
       {
           endTimes.push_back(startingTimes[i]+finishingTime);
       }

        for(auto it: startingTimes)
        {
            cout<<it<<" ";
        }
        cout<<endl;
        for(auto it:endTimes)
        {
            cout<<it<<" ";
        }

    }

    return 0;
}
