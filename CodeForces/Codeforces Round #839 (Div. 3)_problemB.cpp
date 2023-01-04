#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int mtrx[2][2];
        int tmp[2][2];
        int flg=1;
        for(int i=0; i<2; i++)
        {
            for(int j=0; j<2; j++)
            {
                cin>>mtrx[i][j];
            }
        }
        for(int i=0; i<2; i++)
        {
            for(int j=0; j<2; j++)
            {
                tmp[i][j]=mtrx[i][j];
            }
        }

//        for(int i=0; i<2; i++)
//        {
//            for(int j=0; j<2; j++)
//            {
//                cout<<tmp[i][j];
//            }
//            cout<<endl;
//        }
//
//        cout<<endl;
//
//
//        tmp[0][0]=mtrx[1][0];
//        tmp[0][1]=mtrx[0][0];
//        tmp[1][0]=mtrx[1][1];
//        tmp[1][1]=mtrx[0][1];
//
//
//
//        for(int i=0; i<2; i++)
//        {
//            for(int j=0; j<2; j++)
//            {
//                cout<<tmp[i][j];
//            }
//            cout<<endl;
//        }
//
//        cout<<endl;
//
//
//        tmp[0][0]=mtrx[1][1];
//        tmp[0][1]=mtrx[1][0];
//        tmp[1][0]=mtrx[0][1];
//        tmp[1][1]=mtrx[0][0];
//
//
//
//
//        for(int i=0; i<2; i++)
//        {
//            for(int j=0; j<2; j++)
//            {
//                cout<<tmp[i][j];
//            }
//            cout<<endl;
//        }
//
//        cout<<endl;
//
//
//        tmp[0][0]=mtrx[0][1];
//        tmp[0][1]=mtrx[1][1];
//        tmp[1][0]=mtrx[0][0];
//        tmp[1][1]=mtrx[1][0];
//
//
//
//
//
//
//        for(int i=0; i<2; i++)
//        {
//            for(int j=0; j<2; j++)
//            {
//                cout<<tmp[i][j];
//            }
//            cout<<endl;
//        }
//
//        cout<<endl;


        if((tmp[0][0]<tmp[0][1])&&(tmp[1][0]<tmp[1][1])&&(tmp[0][0]<tmp[1][0])&&(tmp[0][1]<tmp[1][1]))
        {

            cout<<"YES"<<endl;
            flg=0;

        }
        else
        {

            for(int i=0; i<3; i++)
            {

                if(i==0)
                {
                    tmp[0][0]=mtrx[1][0];
                    tmp[0][1]=mtrx[0][0];
                    tmp[1][0]=mtrx[1][1];
                    tmp[1][1]=mtrx[0][1];


                    if((tmp[0][0]<tmp[0][1])&&(tmp[1][0]<tmp[1][1])&&(tmp[0][0]<tmp[1][0])&&(tmp[0][1]<tmp[1][1]))
                    {
                        cout<<"YES"<<endl;
                        flg=0;
                        break;
                    }
                }
                if(i==1)
                {
                    tmp[0][0]=mtrx[1][1];
                    tmp[0][1]=mtrx[1][0];
                    tmp[1][0]=mtrx[0][1];
                    tmp[1][1]=mtrx[0][0];

                   if((tmp[0][0]<tmp[0][1])&&(tmp[1][0]<tmp[1][1])&&(tmp[0][0]<tmp[1][0])&&(tmp[0][1]<tmp[1][1]))
                    {
                        cout<<"YES"<<endl;
                        flg=0;
                        break;
                    }
                }
                if(i==2)
                {
                    tmp[0][0]=mtrx[0][1];
                    tmp[0][1]=mtrx[1][1];
                    tmp[1][0]=mtrx[0][0];
                    tmp[1][1]=mtrx[1][0];

                 if((tmp[0][0]<tmp[0][1])&&(tmp[1][0]<tmp[1][1])&&(tmp[0][0]<tmp[1][0])&&(tmp[0][1]<tmp[1][1]))
                    {
                        cout<<"YES"<<endl;
                        flg=0;
                        break;
                    }
                }


            }


        }

        if(flg)
        {
            cout<<"NO"<<endl;
        }



    }
     return 0;
}
