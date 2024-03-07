#include<bits/stdc++.h>
using namespace std;

int solution(string &s2)
{

    if(s2.size()<2 || s2[s2.size()-1]!='B')
    {
        cout<<"NO"<<endl;
        return 0;
    }
    else
    {
        stack<char>check;

        for(int i=0; i<s2.size(); i++)
        {
            if(s2[i]=='A')
            {

                check.push('A');
            }
            else
            {
                if(!check.empty())
                {
                    check.pop();
                }
                else
                {
                    cout << "NO" << endl;
                    return 0;
                }
            }

        }

    }

    return 1;

}

int main()
{

    int tc;
    cin>>tc;
    while(tc--)
    {

        string s2;
        cin>>s2;
        if(solution(s2))
        {
            cout<<"YES"<<endl;
        }

    }

    return 0;
}

//problem link: https://codeforces.com/contest/1672/problem/B
//
//logic: the logic of this problem is simple . in every string 'A' will occure before 'B' means every B has its own A's sequence. and the number of 'A' is always
//grater then the number of 'B' . what i did . i consistenly pushing 'A' and whenever i found 'B' , i pop out the 'A'
//as i said 'A' will be always before 'B' and the number of 'A' is always greater than 'B' thats why there will be always 'A' in the stack before traversing
//at the end of the string .
//if we found an empty stack before ending the traversal or before reaching the end of the string . that means while making
//the string s2 the sequence which is "A is in the first place and then B" is not maintained.
//like: AABBABABBAAB => AABB ABAB B AAB (this B is pushed without its A)
//so the answer will be "NO" .
