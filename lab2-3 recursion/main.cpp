#include <iostream>

using namespace std;

   int NumPower(int x, int y);

int main()
{
    int Num, Power, FinalNum;
    cout << "Enter The Number: ";
    cin >> Num;
    cout << "Enter The Positive Power: ";
    cin >> Power;

    while(Power < 0);
    FinalNum = NumPower(Num, Power);
    cout << "Powered Number is: " << FinalNum;
    return 0;
}

int NumPower(int x, int y)
{
    if(y == 0) return 1;
    if(y > 0)
    {
        return x * NumPower(x, y - 1);
    } else{
    return 1;
    }

}


