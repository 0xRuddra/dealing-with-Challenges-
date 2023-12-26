#include<bits/stdc++.h>
using namespace std;

void input(string *p)
{
    cin>>*p;

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string typedSentnce;
        vector<pair<long long int,char>>capitalLetters;
        vector<long long int>indxCapitalLetters;
        vector<pair<long long int,char>>smallLetters;
        vector<long long int>indxSmallLetters;

        input(&typedSentnce);
        //cout<<"typed string "<<typedSentnce<<endl;
        for(int i=0; i<typedSentnce.length(); i++)
        {
            if(typedSentnce[i]>='A' && typedSentnce[i]<='Z')
            {
                if(typedSentnce[i]=='B' && capitalLetters.size()!=0)
                {
                    capitalLetters.pop_back();
                    //cout<<"pop out"<<endl;
                    //indxCapitalLetters.pop_back();



                }
                else
                {

                    if(typedSentnce[i]!='B')
                    {
                        //cout<<"capital pushing "<<typedSentnce[i]<<endl;
                        capitalLetters.push_back({i,typedSentnce[i]});
                        //indxCapitalLetters.push_back(i);
                        //strSequence=strSequence+'1';
                        //cout<<"indx "<<i<<endl;


                    }

                }
            }
            else
            {

                if(typedSentnce[i]=='b' && smallLetters.size()!=0)
                {
                    smallLetters.pop_back();
                      //cout<<"pop out"<<endl;
                    //indxSmallLetters.pop_back();

                }
                else
                {

                    if(typedSentnce[i]!='b')
                    {
                        //cout<<"smalll pushing "<<typedSentnce[i]<<endl;
                        smallLetters.push_back({i,typedSentnce[i]});
                        //indxSmallLetters.push_back(i);
                         //cout<<"indx "<<i<<endl;

                    }

                }

            }
        }

        vector<pair<long long int,char>>result_vector(capitalLetters.size()+smallLetters.size());
        merge(capitalLetters.begin(),capitalLetters.end(),smallLetters.begin(),smallLetters.end(),result_vector.begin());


        sort(result_vector.begin(),result_vector.end());

        for(auto it:result_vector)
        {
            cout<<it.second;
        }

//        for(int i=0;i<result_vector.size();i++)
//        {
//            //cout<<typedSentnce[result_vector[i]];
//
//        }
        cout<<endl;




    }


    return 0;
}
