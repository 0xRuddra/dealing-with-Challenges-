#include<bits/stdc++.h>
using namespace std;

vector<int> input(int sz)
{
    int x;
    vector<int> tmp;
    for(int i=0;i<sz;i++)
    {
        cin>>x;
        tmp.push_back(x);
    }

    return tmp;


}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int>first_ary;
        vector<int>scnd_ary;
        vector<int>diff;
        int sumof_diff;
        int mx_diff;
        int cnt=0;
        int sz;
        cin>>sz;

        first_ary=input(sz);
        scnd_ary=input(sz);

        sort(first_ary.begin(),first_ary.end());
        sort(scnd_ary.begin(),scnd_ary.end());

        for(int i=0;i<sz;i++)
        {
            diff.push_back(abs(first_ary[i]-scnd_ary[i]));

        }

        for(int i=0;i<sz;i++)
        {
            sumof_diff+=diff[i];
        }

        if(sumof_diff==0)
        {
            cout<<"YES"<<endl;
        }else
        {

            if(( *max_element(first_ary.begin(),first_ary.end())>*max_element(scnd_ary.begin(),scnd_ary.end())) || (*min_element(first_ary.begin(),first_ary.end())>*min_element(scnd_ary.begin(),scnd_ary.end())))
            {
                cout<<"NO"<<endl;

            }else
            {
                mx_diff=*max_element(diff.begin(),diff.end());
                if(mx_diff>1)
                {
                    cout<<"NO"<<endl;
                }else
                {
                    for(int i=0;i<sz;i++)
                    {
                        if(first_ary[i]>scnd_ary[i])
                        {
                            cout<<"NO"<<endl;
                            cnt=0;
                            break;
                        }else
                        {
                            cnt=1;

                        }

                }
                if(cnt){
                    cout<<"YES"<<endl;
                }
            }


        }




    }

    }

    return 0;
}






//https://codeforces.com/contest/1589/problem/C
//You are given two arrays of integers a1,a2,…,an and b1,b2,…,bn
//Let's define a transformation of the array a
//1.Choose any non-negative integer k such that 0≤k≤n
//2.Choose k distinct array indices 1≤i1<i2<…<ik≤n
//3.Add 1 to each of ai1,ai2,…,aik , all other elements of array a  remain unchanged.
//Permute the elements of array a in any order Is it possible to perform some transformation of the array a exactly once,
//so that the resulting array is equal to b ?
//
//3
//3
//-1 1 0
//0 0 2
//1
//0
//2
//5
//1 2 3 4 5
//1 2 3 4 5
//--------------
//YES
//NO
//YES

//logic:
//
//	this code has been done with the basic of 3 logic .
//	1.first element of the first array should never  be greater than the first element of the second array.
//	2.last element of the first array should never be greater than the last element of the second array.
//	3.after sorting the difference at each index should never be greater than 1. if so then the array can not be made
//similar as second array
//	4.after sorting , at the each individual index - first array should never be greater than the second array . like:
//
//	0 2 5 7
//	1 2 3 9 .
//here at the index 2 , the value of first array is 5 which is greater than the value of second array at that index which is 3
//.this logic is important because if there is scenerio like that we can never match 5 with any other element of the second array.







