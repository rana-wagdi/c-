#include <iostream>

using namespace std;


 class Employee
   {
private:
    int id;
    string name;
    float salary;

public:
    static int count;
    Employee(){
        id = 0;
        name = "";
        salary =0.0;
        count++;
    }
    Employee(int Id, string Name, float Salary){
    this->id = Id;
    this->name = Name;
    this-> salary = Salary;
    count++;
    }
    void setId(int Id){
      this->id = Id;
    }
    void setName(string Name){
      this->name = Name;
    }
    void setSalary(float Salary){
      this->salary = Salary;
    }

    int getId(){
        return id;
    }

    string getName(){
    return name;
    }

    float getSalary(){
    return salary;
    }

    static int GetCount(){
        return count;
        }
    ~Employee()
    {
        count--;
    }
   };int Employee:: count=0;

int main()
{
    Employee em1(1,"Rana",22.5);

Employee em2;

em2.setId(2);
em2.setName("Rania");
em2.setSalary(85.8);


    return 0;
}
