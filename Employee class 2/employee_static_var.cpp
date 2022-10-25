#include <iostream>
using namespace std;
class employee{
    string name;
    static int id;
public:
    void setName(void){
        cout<<"enter employee's name"<<endl;
        cin>>name;
        id++;}
    void getName(void){
        cout<<"the name of the employee is "<<name<<" and his id is "<<id<<endl;    
    }
};
int employee::id;
int main(){
    employee hamza,ali,bilal;
    hamza.setName();
    hamza.getName();

    ali.setName();
    ali.getName();

    ali.setName();
    ali.getName();
    return 0;
}