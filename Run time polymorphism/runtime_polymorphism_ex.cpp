#include <iostream>
using namespace std;
class A
{
public:
    void show()
    {
        cout << "this is function A" << endl;
    }
};
class B
{
public:
    void show()
    {
        cout << "this is function B" << endl;
    }
};
int main()
{
    A obj;
    obj.show();
    B obj2;
    obj2.show();
    return 0;
}