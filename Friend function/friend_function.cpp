#include <iostream>
using namespace std;
class A{
    private:
    int num=50;
    char c='A';
    public:
    friend void display(A obj){
        cout<<obj.num<<endl;
        cout<<obj.c<<endl;
    };

};
int main(){
    A obj;
    display(obj);
    return 0;
}