#include <iostream>
#include<string>
#include <cstring>

using namespace std;



int main()
{


   char word[20];
   char latter ;
   int index = 0;

   cout<<"enter the word:"<<endl;
   cin>>word;

   cout<<"enter latter : "<<endl;
   cin>>latter;

   for (int i = 0; i <strlen(word)&&index==0;i++) {


    if(word[i]==latter){
        cout<<"the latter position is "<<i<<endl;
        index = 1;
    }


    }
    if(index == 0){

        cout<<"not found";

   }








    return 0;
}
