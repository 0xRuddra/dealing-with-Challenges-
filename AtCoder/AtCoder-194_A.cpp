#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,f;
    cin>>m>>f;
    int milksolid=m+f;
    if((milksolid>=15)&&(f>=8)){
        cout<<1<<endl;
    }else if((milksolid>=10)&&(f>=3)){
        cout<<2<<endl;
    }else if((milksolid>=3)){
    cout<<3<<endl;
    }else{
    cout<<4<<endl;
    }
return 0;
}
