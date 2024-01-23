#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;

        vector<int>number;
        for(int i=n;i>0;i--)
        {
           number.push_back(i);

        }

        for(auto it:number)
        {
            cout<<it<<" ";
        }
        cout<<endl;
        for(int i=0;i<n-1;i++)
        {
            swap(number[i],number[i+1]);

            for(auto it:number)
            {
                cout<<it<<" ";
            }
            swap(number[i],number[i+1]);
            cout<<endl;
        }


    }


    return 0;
}

//https://codeforces.com/contest/1644/problem/B

//the problem states that i have to find out n number of anti-fibonacci numbers .
//fibonacci numbers: 1 1 2 3 5 [ 1+1 =2 , 2 + 1 =3 , 2+3=5]
//but anti fibonacci numbers: 4 3 2 1 [4+3!=2 , 3+2!=1]
