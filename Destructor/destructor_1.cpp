#include <iostream>
using namespace std;
class y;
class x{
    int data;
    friend void add(x,y);
public:
    x(){
        cout<<"hello world"<<endl;
    }
    void set(int num1){
        data=num1;
    }
    ~x(){
        cout<<"the end"<<endl;
    }
};
class y{
    int datum;
public:
    void setnum(int num2){
        datum=num2;
    }
    friend void add(x,y);
};
void add(x o1,y o2){
    cout<<"the sum is "<<o1.data+o2.datum<<endl;
}
int main(){
    x c1;
    y c2;
    c1.set(3);
    c2.setnum(4);
    add(c1,c2);
    return 0;
}
