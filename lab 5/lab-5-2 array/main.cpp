#include <iostream>

using namespace std;




int main()
{
   int* student[5], subject,grade, total;



     for(int i = 0; i< 5; i++){
        cout<<"student number : " << i+1<<endl;
        cout<<"enter Number of subject"<<endl;
        cin>> subject;
        student[i] = new int [subject];
         for(int i = 0 ; i < subject; i++){

        cout<<"Enter grade of subject number"<<i+1<<endl;
        cin>>grade;


    }
    int total = 0;
    for(int i = 0; i< subject; i++){
              total+= grade;

    }
        cout<<"total Number = " << total<<endl;


    }






    return 0;
}
