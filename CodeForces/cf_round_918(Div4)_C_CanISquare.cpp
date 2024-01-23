#include<bits/stdc++.h>
using namespace std;


bool isPerfectSquare(long long int num) {
    long long int sqrtNum = sqrt(num);
    return sqrtNum * sqrtNum == num;
}


int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        long long int n;
        long long int sum=0;
        cin>>n;

        for(long long int i=0; i<n; i++)
        {
            long long int x;
            cin>>x;
            sum+=x;
        }
        if (isPerfectSquare(sum))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
