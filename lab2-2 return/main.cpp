#include <iostream>

using namespace std;

int Cal(int minNumber);




int main()
{
    int number ;
     cout<<"Enter Number :"<<endl;
     cin>>number;



    Cal(number);
    return 0;
}




int Cal(int minNumber)
    {
int Num,Min;
    cout<<"Please Enter The Number 1"<<endl;
    cin>>Num ;


   // shoud but min == num msh els3aks 34an number = 0
    Min=Num;
        for(int i =2; i <=minNumber; i++){



        cout<<"Please Enter The Number "<<i<<":"<<endl;
        cin>>Num ;




        if(Num < Min){
            Min = Num;
        }



        }
        cout<<"The minNumber = "<< Min ;
        return Min;
    }

