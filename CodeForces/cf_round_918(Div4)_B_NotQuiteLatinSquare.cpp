#include<bits/stdc++.h>
using namespace std;

void input(vector<char>& matrix)
{
    for(int i = 0; i < 9; i++)
    {
        char ch;
        cin >> ch;
        matrix.push_back(ch);
    }
}

int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int a=0, b=0,c=0 ;
        vector<char> matrix;
        input(matrix);
        sort(matrix.begin(),matrix.end());

        for(int i=1; i<9; i++)
        {

            if(matrix[i]=='A')
            {
                a++;
            }
            else if(matrix[i]=='B')
            {
                b++;
            }
            else
            {
                c++;
            }


        }

        if(a!=3)
        {
            cout<<'A'<<endl;
        }else if (b!=3)
        {
            cout<<'B'<<endl;
        }else
        {
            cout<<'C'<<endl;
        }

    }

    return 0;
}
