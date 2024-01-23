#include<bits/stdc++.h>
using namespace std;

void input(int* a, int* b, int*c)
{
    cin>>*a>>*b>>*c;

}

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int a,b,c;
        input(&a,&b,&c);

        if(a==b)
        {
            cout<<c<<endl;
        }else if(a==c)
        {
            cout<<b<<endl;
        }else
        {
            cout<<a<<endl;
        }



    }

    return 0;
}
