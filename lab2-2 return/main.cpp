#include <iostream>

using namespace std;

int minNumber (int Min);


int main()
{
    int number ;
     cout<<"Enter Number :"<<endl;
     cin>>number;

    minNumber(number);
    return 0;
}


int minNumber(int minNumber)
    {
int Num,Min;
    cout<<"Please Enter The Number 1"<<endl;
    cin>>Num ;
    Num=Min;
        for(int i =2; i <=minNumber; i++){

        cout<<"Please Enter The Number "<<i<<":"<<endl;
        cin>>Num ;


        if(Num<Min){
            Min=Num;
        }

        }
        cout<<"The minNumber = "<< Min ;
        return Min;
    }

