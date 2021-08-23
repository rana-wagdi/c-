#include <iostream>

using namespace std;
int main()
{
int number, maxNumber, minNumber;

 cout<<"Enter the Number";
cin>> number;
number = maxNumber = minNumber;

 for(int i=2; i<=5; i++){
cout<<"Enter The Number" <<i <<endl;
cin>> number;

 if (number > maxNumber){
maxNumber = number;
}
if(number < minNumber){
minNumber = number;
}
}

 cout<<"the maxNumber is :"<<maxNumber<<endl;
cout<<"the minNumber is :"<<minNumber<<endl;

 return 0;
}
