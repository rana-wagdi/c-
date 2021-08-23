#include <iostream>

using namespace std;

int main()
{
    int ar[3][4], totalGrade , subject ;


    for(int row = 0; row < 3; row++){
            cout<<" student Number "<<row+1 <<endl;
        for(int col= 0; col < 4; col++){
            cout<<" Enter subject Grad "<<col+1 <<endl;
            cin>>ar[row][col] ;
        }
    }

   for(int row = 0; row < 3; row++){
       totalGrade =0;

  for(int col= 0; col < 4; col++){
      totalGrade += ar[row][col] ;
  }
  cout<<"The grade Number for student " << row+1 << " is " << totalGrade <<endl;
   }
   for(int col= 0; col < 4; col++){
       subject =0;

  for(int row= 0; row < 3; row++){
      subject += ar[row][col] ;
  }
  cout<<"Average grade of subject " << col+1 << " is " << subject/3 <<endl;
   }

    return 0;
}
