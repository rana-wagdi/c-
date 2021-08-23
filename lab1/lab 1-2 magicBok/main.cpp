#include <iostream>
#include "windows.h"



void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}




using namespace std;





int main()
{
    int i, size, col, row;



    cout<<"Size of Magic box";
    cin >> size;



    if(size %2 != 0){
        for(i = 1; i <=(size*size); i++){
            if(i==1)
            {
                row =1;
                col =(size+1)/2;
                cout << "Number " << i << "  " << "row = " << row << "," << "col = " << col << endl;




            }
             if ((i-1)%size != 0){
                row--;
                col--;
                if (row < 1){
                    row=size;
                }
                if(col < 1){
                    col=size;



                }
              else{
                    row++;




                }
                 cout << "Number " << i << "  " << "row = " << row << "," << "col = " << col << endl;
            }



        }



    }else {
            cout<<"Please enter odd number";
        }
    return 0;
}
