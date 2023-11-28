#include<bits/stdc++.h>
using namespace std;

void input(string *inpt)
{
    string x;
    cin>>x;
    *inpt=x;

}

int main()
{
    string str;
    int one=0,zro=0,cnt=1;
    input(&str);
    for(int i=0; i<str.length(); i++)
    {
        if(str[i]=='1')
        {

            one++;
            //cout<<" one is : "<<one<<endl;
            if(one>=7)
            {
                cout<<"YES"<<endl;
                cnt=0;
                break;
            }
            zro=0;
            continue;
        }
        else
        {
            zro++;
            //cout<<" zro is : "<<zro<<endl;
            if(zro>=7)
            {
                cout<<"YES"<<endl;
                cnt=0;
                break;
            }

            one=0;
            continue;
        }
    }

    if(cnt)
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
