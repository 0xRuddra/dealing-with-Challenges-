/*Kefa decided to make some money doing business on the Internet for exactly n days. He knows that on the i-th day (1 ≤ i ≤ n)
he makes ai money. Kefa loves progress, that's why he wants to know the length of the maximum non-decreasing subsegment in sequence ai.
Let us remind you that the subsegment of the sequence is its continuous fragment. A subsegment of numbers is called non-decreasing if all
numbers in it follow in the non-decreasing order.

Help Kefa cope with this task!

intput:6
2 2 1 3 4 1

output:3
input:3
2 2 9
output:3
*/


#include<bits/stdc++.h>
using namespace std;

void input(int x[],int y)
{
    for(int i=0;i<y;i++)
    {
        cin>>x[i];
    }
}

int main()
{
    int n,cnt=1;
    vector<int>track;
    cin>>n;
    int a[n];
    input(a,n);
    int arrsize=sizeof(a)/sizeof(a[0]);
   // cout<<"ary size "<<arrsize<<endl;
   track.push_back(cnt);
    for(int i=0;i<arrsize-1;i++)
    {

      if(a[i]<=a[i+1])
      {
          cnt++;
          //cout<<"for a[i] "<<a[i]<<" and a[i+1] "<<a[i+1]<<" the count is "<<cnt<<endl;
        track.push_back(cnt);
      }else{
      cnt=1;
      }
    }



    int result=*max_element(track.begin(),track.end());
    cout<<result<<endl;


    return 0;
}
