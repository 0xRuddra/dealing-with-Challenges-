#include<bits/stdc++.h>
using namespace std;

void input(int a,vector<int> *ptr)
{
    for(int i=0; i<a; i++)
    {
        int x;
        cin>>x;
        ptr->push_back(x);
    }

}

int main()
{
    int n,m;
    cin>>n>>m;

    vector<int>student_line;
    queue<pair<int,int>>q;

    input(n,&student_line);

    for(int i=0; i<n; i++)
    {
        if(m<student_line[i])
        {
            q.push({i+1,student_line[i]});
        }

    }

    if(q.size()<1)
    {
        cout<<n<<endl;
    }
    else
    {




        while( q.size()> 1)
        {
            int firstElm=q.front().first;
            int secondElm=q.front().second - m;


            if( secondElm <=0)
            {

                q.pop();
            }
            else
            {
                q.pop();
                q.push({firstElm,secondElm});
            }

        }
        cout<<q.front().first<<endl;
    }







    return 0;
}



//problem link: https://codeforces.com/problemset/problem/450/A

//the logic of thi s problem is first i filtered out all the values that are above 'm'
//so that the student line become small and decleared a queue of pair so that i can
//track down the pair and their index of the actual line .  and in that queue i simply
//minus 'm' and if it meets 0 that means that that child has got enough candy and can go
//to home else he/she will push back to the queue at the end of the line . thus the problem
//can be solved.
