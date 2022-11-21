//https://codeforces.com/problemset/problem/276/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,break_time;
    cin>>n;
    cin>>break_time;
    vector<int>f;
    vector<int>mx_f;
    vector<int>t;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        f.push_back(x);
        t.push_back(y);

    }



    for(int i=0;i<n;i++)
    {
        int x;

        if(t[i]>break_time)
        {
            x=f[i]-(t[i]-break_time);
            mx_f.push_back(x);


        }else{
         mx_f.push_back(f[i]);



        }


    }

    cout<<(*max_element(mx_f.begin(),mx_f.end()))<<endl;




    return 0;
}
