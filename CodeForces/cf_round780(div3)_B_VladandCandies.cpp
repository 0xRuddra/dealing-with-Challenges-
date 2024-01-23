#include<bits/stdc++.h>
using namespace std;

void input(int *n, vector<int>& a)
{
    cin>>*n;
    for(int i=0;i<*n;i++)
    {
        int x;
        cin>>x;
        a.push_back(x);

    }

}

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        vector<int>a;
        int result=0;

        input(&n,a);


            if(n==1)
            {
                if(a[0]>1)
                {
                    cout<<"NO"<<endl;
                }else
                {
                    cout<<"YES"<<endl;
                }
            }else
            {
                sort(a.begin(),a.end(),greater<int>());

                if(abs(a[0]-a[1])>1)
                {
                    cout<<"NO"<<endl;
                }else
                {
                    cout<<"YES"<<endl;
                }


            }



    }

    return 0;
}

//explanation: first sorted the list . then substracted the most 2 big numbers. if there substraction results in more than 1
//then no matter what happens there will always be candy left of same type .
