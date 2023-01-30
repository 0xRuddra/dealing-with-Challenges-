#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        string actualValue="3141592653589793238462643383279";
        int correctGuess=0;
        string inputValue;
        cin>>inputValue;
        for(int i=0;i<inputValue.size();i++)
        {
            if(actualValue[i]!=inputValue[i])
            {
                break;
            }else
            {
                correctGuess++;
            }
        }
        cout<<correctGuess<<endl;

    }
    return 0;
}
