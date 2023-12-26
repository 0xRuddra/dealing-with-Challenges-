#include<bits/stdc++.h>
using namespace std;

void input(int *lngth,string *str)
{
    cin>>*lngth>>*str;

}

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int lngth;
        string str;
        set<char>uniqAlpha;
        set<char>:: iterator it;
        vector<pair<char,int>>occurance;
        int canSolve=0;

        input(&lngth,&str);

        for(int i=0;i<str.size();i++)
        {
            uniqAlpha.insert(str[i]);
        }

        for(auto it:uniqAlpha)
        {
            int cnt=0;

            for(int i=0;i<str.size();i++)
            {
                if(it==str[i])
                {
                    cnt++;
                }
            }
            occurance.push_back({it,cnt+64});
        }

        for(int i=0;i<uniqAlpha.size();i++)
        {
            //cout<<occurance[i].first<<" - "<<occurance[i].second-64<<endl;
            int check;
            check=occurance[i].second;
            //cout<<" value "<<check<<endl;
            if(occurance[i].first<=occurance[i].second)
            {
                canSolve++;
            }

        }

        cout<<canSolve<<endl;




    }

    return 0;
}


//problem link: https://codeforces.com/contest/1914/problem/A

//what i did is , i first find out all the unique characters from the string .
//then find out the occurance of each particular string in the given string .
//while pushing to occurance vector i add 64 with the occurance number correspond
//to the character because  see, in the problem we are told that to solve A ,
//there must be 1 A or more A , to solve B there must be 2 B or more B .
//so if i convert the character into ascii value , we will find that A's value is 64 .
//so if the occurance of A is 1 or more which is 64+1 , 64+more that A can be solve .
//so to solve A , the occurance value must be 65 or more than 65.
//same goes for other characters . like for B the occurance value must be 64+2 , 64+more.
