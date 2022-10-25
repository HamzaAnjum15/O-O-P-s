#include <iostream>
using namespace std;
class cars
{
public:
    void getdetails(int distance, int fuel)
    {
        cout << "the car has covered " << distance << "km and has consumed " << fuel << " ltr" << endl;
    }
    void mileage(float distance, float fuel);
    //  declaration of object 1st method
} civic;

void cars :: mileage(float d, float f)
{
    float carmileage;
    carmileage = d / f;
    cout << "the mileage of car is " << carmileage << endl;
}
int main()
{
    // declaration of object 2nd method
    cars corolla;
    corolla.getdetails(30, 4);
    civic.getdetails(34, 5);
    corolla.mileage(35,5);
    
    return 0;
}

