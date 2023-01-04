//Codeforces Round #839 (Div. 3)

#include<bits/stdc++.h>
using namespace std;

int valueJugHobeKi(queue<int>x)
{
    int fsum=0,i=0;
    vector<int>sampleAry;
    sampleAry.push_back(1);
    while(!x.empty())
    {
        fsum=sampleAry[sampleAry.size()-1]+x.front();
        sampleAry.push_back(fsum);
        //cout<<x.front()<<" ";
        x.pop();
    }
//    cout<<endl;
//    cout<<fsum<<" ";
//    cout<<endl;
    return fsum;
}

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int k,n;
        int sum=0;
        cin>>k>>n;
        queue<int>diffBtwElmnt;
        vector<int>actualArray;
        vector<int>actualDiff;
        //actualDiff.push_back(1);
        actualArray.push_back(1);
        for(int i=0; i<k-1; i++)
        {
            diffBtwElmnt.push(1);

        }
        //cout<<diffBtwElmnt.back()+1<<endl;

        while(!(valueJugHobeKi(diffBtwElmnt)>n))
        {
            int v=diffBtwElmnt.back()+1;
            diffBtwElmnt.push(v);
            diffBtwElmnt.pop();

        }


        while(!diffBtwElmnt.empty())
        {
            int v;
            v=diffBtwElmnt.front()-1;
            if(v!=0)
            {
                actualDiff.push_back(v);
            }
            else
            {
                actualDiff.push_back(1);
            }

            diffBtwElmnt.pop();
        }

        for(int i=0; i<actualDiff.size(); i++)
        {
            actualArray.push_back(actualArray[actualArray.size()-1]+actualDiff[i]);
        }

        for(int i=0; i<actualArray.size(); i++)
        {
            cout<<actualArray[i]<<" ";
        }
        cout<<endl;

    }


    return 0;
}

//[eikhane ekta kaj kreci . agei element gola r difference er ekta queue banai nici . amra jani
//kono ekta array te jotota element thkbe tader difference er element hobe tar theke ek kom.
//like 5 ta element thkle , difference er array te element thkbe 4 ta .
//prthme dore nici j sobar modde ek ek kore difference. ebong ek ek kore difference thkle array ta
//build krle oita ki condition maintain kre . jdi kre then oi difference queue te difference ek kore
// baraici last er tai ar pthm theke ekta pop krci . eivbe same difference er jate na hoi emon element ber krci.]

