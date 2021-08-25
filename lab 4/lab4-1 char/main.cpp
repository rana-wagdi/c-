#include <iostream>
#include <cstring>
using namespace std;





int main()
{
   char firstName[8], lastName[8], fullName[16];

   cout<<"Enter first name : " <<endl;
   cin>>firstName;

   cout<<"Enter Last Name :"<<endl;
   cin>>lastName;

   strcpy(firstName, firstName);
   strcat(fullName, " ");
   strcat(fullName, lastName);


   cout<<"Full Name :" <<fullName;



    return 0;
}
