//https://codeforces.com/problemset/problem/118/A

#include<bits/stdc++.h>
using namespace std;
int main()
{


        string vowels="aoyeui";
        string str;
        int cnt=0;
        cin>>str;
        //cout<<"string length "<<str.length()<<endl;
        for(int i=0;i<str.length();i++)
        {
            char x=(char)tolower(str[i]);
            //cout<<"x is "<<x<<endl;

            for(int i=0;i<vowels.size();i++)
            {
                //cout<<"vowels is "<<vowels[i]<<endl;
                if(x!=vowels[i]){
                        cnt=1;
                }else
                {
                    cnt=0;
                    break;
                }
            }
            if(cnt)
            {
                cout<<"."<<x;
            }

                cnt=0;

        }
        cout<<endl;











    return 0;
}
