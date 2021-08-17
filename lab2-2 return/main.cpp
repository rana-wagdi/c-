#include <iostream>

using namespace std;

int minNumber (int Min);int Num;


int minNumber(int Min)
    {
        int Num;
        for(int i =2; i <=5; i++){
            cout<<"Please Enter The Number :"<<i<<endl;
            cin>>Num ;
        if(Num<Min){
            Min=Num;
        }

        }
        return Min;
    }

int main()
{
    int Mn ;
    cout << "Please Enter The Number :"<<endl ;
    cin >> Num;
    Mn=minNumber(Num);
    cout << "the MinNumber = " << Mn << endl;
    return 0;
}
