#include <iostream>
using namespace std;
int main()
{
    class employee
    {
    public:
        string name;
        int salary;
        void printdetails()
        {
            cout << "the name of employee is " << name << " & his salary is " << salary <<" dollars"<< endl;
        }
    };
    employee ham;
    ham.name = "hamza"; 
    ham.salary = 175000; 
    ham.printdetails();
    return 0;
}
