#include <iostream>

using namespace std;

int main()
{
    int Num[5], MaxNumber, MinNumber, MaxIndex, MinIndex;


    cout<<"Enter Number 1"<<endl ;
    cin>>Num[0];

   MaxNumber = MinNumber= Num[0];

    MaxIndex = MinIndex =0;

    for(int i =1; i<5; i++){
        cout<<"Enter Number "<< i+1<<endl;
        cin>>Num[i];
        if (Num [i] > MaxNumber){
            MaxNumber = Num[i];
            MaxIndex = i ;
        }
    if (Num [i] < MinNumber){
            MinNumber = Num[i];
            MinIndex = i ;
        }
    }

    cout<<"Max Number is " <<MaxNumber <<" Number Index " << MaxIndex<<endl;
    cout<<"Min Number is " <<MinNumber <<" Number Index " << MinIndex<<endl;
    return 0;
}
