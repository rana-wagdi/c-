#include <iostream>

using namespace std;




int main()
{
   int* ptr;
   int size;
   cout<<"How many subject you have this year? "<<endl;
   cin>>size;
   ptr = new int[size];

   if(ptr != NULL){
    for(int i = 0; i< size; i++){
        cout<<"Enter the grad of subject number : " << i+1<<endl;
        cin>>*(ptr+i);

    }
    int total=0;

     for(int i = 0 ; i < size; i++){

        total+= *(ptr+i);

    }
   cout<<"total is = " <<total<<endl;
   delete (ptr);
   }


    return 0;
}
