#include <iostream>
using namespace std;;
class add{
    public:
    int sum(int num1,int num2){
        return num1+num2;
    }
    int sum(int num1,int num2,int num3){
        return num1+num2+num3;
    }
};
int main(){
    add obj;
    //first function//
    cout<<"the output is "<<obj.sum(2,3)<<endl;
    //second function//
    cout<<"the output is "<<obj.sum(5,5,5)<<endl;
    return 0;
}