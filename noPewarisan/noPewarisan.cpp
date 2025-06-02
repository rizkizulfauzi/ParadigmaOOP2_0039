#include <iostream>
using namespace std;

class basedClass final
{
public:
    virtual void perkenalan()
    {
        cout << "Hallo saya Function dari base class";
    }
};
class derivedClass : public basedClass
{
public:
    void perkenalan()
    {
        cout << "Hallo saya Funtion dari derived Class";
    }
};
int main()
{
    derivedClass a;
    a.perkenalan();
    return 0;
}