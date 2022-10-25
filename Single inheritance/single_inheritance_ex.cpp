#include <iostream>
using namespace std;
class teacher
{
public:
    teacher()
    {
        cout << "Hi! I'm a teacher" << endl;
    }
};
class EnglishTeacher : public teacher
{
public:
    EnglishTeacher()
    {
        cout << "I teach English" << endl;
    }
};
int main()
{
EnglishTeacher obj;

    return 0;
}