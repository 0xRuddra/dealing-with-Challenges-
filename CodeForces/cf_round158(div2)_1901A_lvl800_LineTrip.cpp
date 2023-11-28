#include<bits/stdc++.h>
using namespace std;

void input(int x,vector<int> *z)
{

    int a;
    for(int i=0;i<x;i++)
    {
        cin>>a;
        z->push_back(a);
    }


}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n,x;
        int max_distance;
        int between_distance,end_distance;
        vector<int> gas_station;

        cin>>n>>x;
        input(n,&gas_station);

        sort(gas_station.begin(),gas_station.end());
        max_distance=gas_station[0];

//        cout<<"before the loop "<<max_distance<<endl;

        for(int i=0;i<n-1;i++)
        {
            between_distance=abs(gas_station[i]-gas_station[i+1]);
//            cout<<" distance between "<<between_distance<<endl;
            if(between_distance>max_distance)
            {
                max_distance=between_distance;
            }
        }

//        cout<<" max_distance "<<max_distance<<endl;
        end_distance=2*abs((gas_station[gas_station.size()-1]-x));

//        cout<<" end distance "<<end_distance<<endl;

        if(end_distance>max_distance)
        {
            max_distance=end_distance;
        }


        cout<<max_distance<<endl;


    }




    return 0;
}
