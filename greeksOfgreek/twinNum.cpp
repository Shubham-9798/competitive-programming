#include <iostream>
using namespace std;

// Function prototype
//what is twin prime

bool twinFun(int j);
int main()
{
    int a,test,j,i;
    cout<<"number of test case";
    cin>>test;
    int temp1=0;

    while(test--){

        cout<<"enter the range for twin prime";
        cin>>a;

        for(i=2;i<=a;i++){//range
                bool prime = true;
                for( j=2;j<i;j++){//check

                   if(a==1)
                     cout<<"not a prime number";

                   if(i%j==0)
                    prime=false;



                }
              // if(j==2)
                //continue;

            if((prime==true)&&(j+2<=a))
                    {
                      // cout<<j<<endl;
                        int k=j+2;
                        if(twinFun(k))
                          cout<<"("<<j<<","<<k<<")"<<endl;
                    }
        }

    }


    return 0;
}

bool twinFun(int t)//9
{
    bool prime=true;
           for( int j=2;j<t;j++){//check //j=2;j<9;j++
              // cout<<t;
                  if(t%j==0)
                     prime=false;

                }
        return prime;

}




