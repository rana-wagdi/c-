#include <iostream>

using namespace std;


class Person {
protected:
int id;
string name;

public:
    Person()
    {
        id = 0;
        name = "";
    }
    Person(int Id, string Name){
    this-> id= Id;
    this ->name = Name;
    }
    void setId(int Id){
    id = Id;
    }
    void setName(int Name){
    name = Name;
    }
    int getId(){
    return id;
    }
    string getName(){
        return name;
    }

    virtual void display()
    {
        cout<< "ID : "<< id <<endl;
        cout<< "Name: "<< name <<endl;
    }
};

class Employee:public Person{

protected:
float salary;
string position;

public:
    Employee(){
    salary = 0.0;
    position="";
    }
    Employee(int Id, string Name, float Salary, string Position):Person(Id, Name){
     this-> salary= Salary;
     this ->position = Position;
    }
    void setSalary(int Salary){
    salary=Salary;
    }
    void setPosition(int Position){
    position=Position;
    }
    float getSalary(){
    return salary;
    }
    string getPosition(){
        return position;
    }

     void display()
    {
        cout<< "ID : "<< id <<endl;
        cout<< "Name : "<< name <<endl;
        cout<< "Position is : "<< position <<endl;
        cout<< "Salary: "<< salary <<endl;
    }
};

class Customer:public Person{

protected:
    int acountNumber;
public:
    Customer() {
    acountNumber =0;
    }
     Customer(int Id, string Name,int AcountNumber):Person(Id, Name){
     this->acountNumber=AcountNumber;
    }
    void setAcount(int AcountNumber){
    acountNumber=AcountNumber;
    }

    int getAcount(){
    return acountNumber;
    }
  void display()
    {
        cout<< "ID : "<< id <<endl;
        cout<< "Name : "<< name <<endl;
        cout<< "AccountNumber: "<<  acountNumber <<endl;
    }

};

void PrintData(Person* print);
int main()
{
    Person p(1,"Rana");

    Employee e(2,"Karim",15.60,"Manger");
    Customer c(3 , "Zaki" , 25648);


    PrintData(&p);
    PrintData(&e);
    PrintData(&c);


    return 0;
}
void PrintData(Person* print){
    print->display();
}

