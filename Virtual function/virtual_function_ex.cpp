#include <iostream>
using namespace std;
class base{
    public:
    virtual void display(){
        cout<<"this is base class"<<endl;
    }
    void show(){
        cout<<"this is base class"<<endl;
    }
};
class derived:public base{
    public:
    void display(){
        cout<<"this is derived class"<<endl;
    }
    void show(){
        cout<<"this is derived class"<<endl;
    }
};
int main(){
    base* obj;
    derived obj2;
    obj = &obj2;

    obj->display();
    obj->show();
    return 0;
}