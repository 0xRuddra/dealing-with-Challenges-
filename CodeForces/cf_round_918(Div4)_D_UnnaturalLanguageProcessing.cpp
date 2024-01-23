#include<bits/stdc++.h>
using namespace std;

void input(long long int* n, string* givenWord)
{
    cin>>*n>>*givenWord;

}

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {

        long long int n;
        string givenWord;
        int C=0,V=0;
        vector<char>spiltedWord;

        input(&n,&givenWord);

        for(int i=0; i<n; i++)
        {


            if(C==0 & V==0 && (givenWord[i]=='b' || givenWord[i]=='c'||givenWord[i]=='d'))
            {
                C++;
                spiltedWord.push_back(givenWord[i]);
//                cout<<"first loop-"<<"c value "<<C<<" i value "<<i<<endl;
//
//                cout<<givenWord[i]<<endl;

            }
            else if(C!=0 && V==0 && (givenWord[i]=='a' || givenWord[i]=='e'))
            {
                V++;

                spiltedWord.push_back(givenWord[i]);
//                cout<<"second loop-"<<"c value "<<C<<" i value "<<i<<endl;
//
//                cout<<givenWord[i]<<endl;
            }
            else if(C!=0 && V!=0 &&(!(givenWord[i]=='a' || givenWord[i]=='e') && (givenWord[i+1]=='a' || givenWord[i+1]=='e')))
            {
                spiltedWord.push_back('.');
                //spiltedWord.push_back(givenWord[i]);
                i=i-1;
                C=0;
                V=0;
//                cout<<"third loop-"<<"c value "<<C<<" v value "<<V<<" i value "<<i<<endl;
//
//                cout<<'.'<<endl;
//                cout<<givenWord[i]<<endl;
            }
            else if(C!=0 && V!=0 &&(!(givenWord[i]=='a' || givenWord[i]=='e') && !(givenWord[i+1]=='a' || givenWord[i+1]=='e')))
            {
                C=0;
                V=0;
                spiltedWord.push_back(givenWord[i]);
                if(i!=n-1)
                {
                    spiltedWord.push_back('.');
                }

//                cout<<"Fourth loop-"<<"c value "<<C<<" v value "<<V<<" i value "<<i<<endl;
//
//                cout<<givenWord[i]<<'.'<<endl;
            }
        }


        for(auto it:spiltedWord)
        {
            cout<<it;
        }
        cout<<endl;
    }

    return 0;
}
