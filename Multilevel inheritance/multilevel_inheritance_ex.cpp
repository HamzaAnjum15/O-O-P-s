#include <iostream>
using namespace std;
class science{
    public:
    science(){
    cout<<"subject name is science"<<endl;
    }
};
class physics : public science{
    public:
    physics(){
        cout<<"physics is the branch of science"<<endl;
    }

};
class magnetism :public physics{
    public:
    magnetism(){
        cout<<"topic name is magnetism"<<endl;

    }
};
int main(){
    magnetism obj;
    return 0;
}