#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int track;
    map<int,int>children;
    queue<int>line;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        children[i]=x;
        line.push(i);
    }



    while(line.size()!=0)
    {


        if(children[line.front()]<=m)
        {
            track=line.front();


        }
        else
        {
            children[line.front()]-=m;
            line.push(line.front());
            line.pop();


        }


    }

    cout<<track+1<<endl;

    return 0;
}

//[ approach: amk track rakte hobe je line er kon position er child picone jacce .eijonno ami children num golake queue te reke diyeci.
//ekon tara enough candy paile satisfy hye cole jabe mane pop hoye jabe ar na pele line er sesh e darabe. tara enough candy peyece ki na
//eita r hisab raka r jonno line er protita children er candy er need ke map diye track kre rekeci.like mp[eto no child er need ] : etota
//candy ; child satisfy hole pop kre dei na hole take line er sesh mane queue e push kre dei. eivbe last prjnto check kreci. ]
