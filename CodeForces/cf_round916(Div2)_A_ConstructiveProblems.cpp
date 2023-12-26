#include<bits/stdc++.h>
using namespace std;

void input(int *n , int *m)
{
    cin>>*n>>*m;
}

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,m;
        input(&n,&m);
        cout<<max(n,m)<<endl;

    }

    return 0;
}


//problem link: https://codeforces.com/contest/1905/problem/A

//if we analysis this problem . we will find out that to construct the whole city
//we need minimum 1 govt constructed city diagonally . then the whole matrix or the
//whole city can be reconstructed . lets consider a 5x5 matrix .
//
//     1   2   3   4   5
//   1 x
//   2     x
//   3         x
//   4             x
//   5                 x
//
//we will see that we can construct the whole city . but what if the matrix is not square
//matrix . in that case there must be one govt constructed building in each row/col . lets
//consider 7x5 .
//
//     1   2   3   4   5   6   7
//   1 x                   x
//   2     x
//   3         x
//   4             x
//   5                 x
//   6
//   7                         x
//
//then we will see that we can rebuild the whole city . so if we analyse this then we will find out
//that maximum number of row and col are the minimum number that the govt. build to reconstruct the
//whole city .

