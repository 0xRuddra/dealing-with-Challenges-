/*Your company has N employees, called Employee 1 through N.
You have received two work orders, called Work A and B, which must be completed.
Employee i can complete Work A in Ai minutes and Work B in Bi minutes.

You will assign each work to one employee.
You can assign both works to the same employee, in which case the time it takes for him/her to complete them is the sum of the times it takes for him/her to do them individually.
If you assign the works to different employees, the time it takes for them to complete them is the longer of the times it takes for them to do their respective works.
Find the shortest possible time needed to complete the works.

3
8 5
4 4
7 9
output:5

3
11 7
3 2
6 7
output:5 */

#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,min_A,min_B,indxA=0,indxB=0;
    int tmptotal,x,y,z,zx;
    int frstcon,scndcon;

    cin>>n;
    vector<int> A,B;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        A.push_back(x);
        B.push_back(y);
    }
    min_A=*min_element(A.begin(),A.end());
    min_B=*min_element(B.begin(),B.end());

    for(int i=0;i<A.size();i++)
    {
        if(min_A==A[i]){
            break;
        }else{
        indxA++;
        }
    }
    for(int j=0;j<B.size();j++)
    {
        if(min_B==B[j])
        {
            break;
        }else
        {
            indxB++;
        }
    }


    if(indxA!=indxB)
    {
        frstcon=max(min_A,min_B);
        cout<<frstcon<<endl;
    }else{

        tmptotal=min_A+min_B;

        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        y=A[1];
        z=B[1];

        scndcon=min(y,z);

        if(tmptotal<scndcon)
        {
            cout<<tmptotal<<endl;
        }else if((min_A==y)&&(min_B==z)){

              zx=max(y,z);
              cout<<zx<<endl;
            }
        else{
            cout<<scndcon<<endl;
        }


    }



    return 0;
}
