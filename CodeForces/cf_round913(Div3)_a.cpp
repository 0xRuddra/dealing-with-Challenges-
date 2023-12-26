#include<bits/stdc++.h>
using namespace std;

void input(string *p,char *q,int *r)
{
    cin>>(*p);
    *q=(*p)[0];
    *r=(*p)[1]-'0';

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string pos;
        char alpha;
        int num;
        vector<string>canMove;
        input(&pos,&alpha,&num);
        for(int i=1;i<9;i++)
        {
            if(i!=num)
            {
                string x;
                x=alpha+to_string(i);
                canMove.push_back(x);
            }
        }
        for(char i='a';i<'i';i++)
        {
            if(i!=alpha)
            {
                string x;
                x=i+to_string(num);
                canMove.push_back(x);
            }
        }

        for(auto z:canMove)
        {
            cout<<z<<endl;
        }


    }


    return 0;
}
