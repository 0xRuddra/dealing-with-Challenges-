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
        if(n==1)
        {
            cout<<-1<<endl;

        }else
        {
            cout<<"4";
            for(int i=0;i<n-1;i++)
            {
                cout<<"7";
            }
            cout<<endl;



        }


    }



    return 0;
}


/* kon ekta songka te jodi bejur digit thake tahole oi bejur digit diye pora songha ta toknoi vag jabe jodi pora sonkha tar
 sum oi sonkar under er bejur digit diye vag jai . like 32 . (3+2)=5 . 5 is not divisible by 3 hence 32 is not divisible by  3 */
