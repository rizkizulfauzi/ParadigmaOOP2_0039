#include <iostream>
using namespace std;
class seseorang
{
public:
virtual void pesab() = 0;
};

class joko : public seseorang {
    public:
    void pesan(){
        cout << "Pesan dari joko" << endl;
    }
};