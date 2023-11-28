#include<bits/stdc++.h>
using namespace std;

void input(int *a)
{
    int x;
    cin>>x;
    *a=x;

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        input(&n);

        if(n%3==1 || n%3==2)
        {
            cout<<"First"<<endl;
        }else if(n%3==0)
        {
            cout<<"Second"<<endl;
        }



    }

    return 0;
}


//problem link: https://codeforces.com/contest/1899/problem/A
