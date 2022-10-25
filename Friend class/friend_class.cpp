#include <iostream>
using namespace std;
class one{
    private:
    char ch='A';
    int num=1;
    
    public:
    friend class two;
};
class two{
    public:
    void display(one obj){
        cout<<obj.num<<endl;
        cout<<obj.ch<<endl;
    }
};
int main(){
    two obj;
    one obj2;
    obj.display(obj2);
    return 0;
}