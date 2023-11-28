#include<bits/stdc++.h>
using namespace std;

void input(long long int *a, long long int *b)
{
    cin>>(*a)>>(*b);

}

int main()
{

    int t;
    cin>>t;
    while(t--)
    {

        long long int n,k;
        long long int already_updated=1;
        long long int remain;
        long long int hour=0;
        input(&n,&k);


        if(n==1)
        {
            cout<<0<<endl;
        }
        else
        {

            remain=n;
            while(k>=already_updated && remain>0)
            {
                already_updated=already_updated*2;
                hour++;
                remain=n-already_updated;
//                cout<<"remain  "<<remain<<" and the already up: "<<already_updated<<" hour: "<<hour<<endl;
            }

            if(remain>0 && remain%k==0)
            {
//                cout<<"if->";
                hour=hour+(remain/k);
//                cout<<"remain  "<<remain<<" and the already up: "<<already_updated<<" hour: "<<hour<<endl;

            }
            else if(remain>0 && remain%k!=0 )
            {
//                cout<<"else->";

                hour=hour+(remain/k)+1;
//                 cout<<"remain  "<<remain<<" and the already up: "<<already_updated<<" hour: "<<hour<<endl;
            }

//                     cout<<"inside else block  "<<"and the already up: "<<already_updated<<" hour: "<<hour<<endl;
            cout<<hour<<endl;
        }




    }


    return 0;
}




//problem link: https://codeforces.com/contest/1606/problem/B
//explanation:
//the logic of this code is simple - as the range is 10^18 we have to keep in mind that we have to complete it
//withing time limit .
//first of all if we see the scenerio then we will see that there are 2 situation .
//1. when the updated_computer is less then or equal the cable
//2.when the updated_computer number is greater then the cable.
//
//if already_updated is less or equal then the cable , we will see that we can update computer of the multiplication of already
//updated computer . like if  n=10 and k=8 . then first hour 1*2[as only one computer is updated]=2,
//right now we have 2 computeres that are updated and we have 8 cable. so now we can update 2*2[no matter how many cable we have but we only have 2 updated computers ] =4 ,
//now we have 4 computers that are updated and we have 8 cable . so we can now update 4*2[as only 4 cable is used because only 4 computer is updated]= 8 .
//
//and now we can update 8*2=16[as we have 8 computer updated and 8 cable]
//and we have no remain left .
//
//but if num of updated computer gets higher than the no of cable then we can update only that amount because we have only that number of cable .
//so we can find how many times we need to updated by the division because if we want to go to 10 with 2 step each . we can go
//2+2+2+2+2=10 with 5 step . as well as , 10/2=5.
