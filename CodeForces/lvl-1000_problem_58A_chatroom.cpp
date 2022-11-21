#include<bits/stdc++.h>
using namespace std;
int check(int s)
{
    if(s)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    else
    {

        cout<<"NO"<<endl;
        return 0;
    }
}
int main()
{
    string s;
    int x=0;
    cin>>s;
    int n=s.size();
    for(int i=0; i<n; i++)
    {
        if(s[i]=='h')
        {

            for(int j=i+1; j<n; j++)
            {

                if(s[j]=='e')
                {

                    for(int k=j+1; k<n; k++)
                    {
                        if(s[k]=='l')
                        {


                            for(int l=k+1; l<n; l++)
                            {
                                if(s[l]=='l')
                                {
                                    for(int m=l+1; m<n; m++)
                                    {
                                        if(s[m]=='o')
                                        {
                                            x=1;

                                        }

                                    }

                                }

                            }

                        }

                    }


                }

            }

        }

    }
    check(x);





    return 0;
}
