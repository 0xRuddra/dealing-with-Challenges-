#include<bits/stdc++.h>
using namespace std;
int main()
{
    double orginalPrice,discountedprice;
    double discount;
    cin>>orginalPrice>>discountedprice;
    //discount=(1-discountedprice/orginalPrice)*100.00;
    discount=((orginalPrice-discountedprice)*100)/orginalPrice;
    cout<<fixed<<setprecision(18)<<discount;



    return 0;
}
