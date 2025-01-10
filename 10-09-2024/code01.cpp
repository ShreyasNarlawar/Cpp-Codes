
#include <iostream>
using namespace std;

class myclass {
private:
    int privar;

protected:
    int provar;

public:
    myclass()
    {
        privar = 854;
        provar = -1254;
    }

    friend class Frd;
};

class Frd {
public:
    void display(myclass& t)
    {
        cout << "The value of Private Variable = "
             << t.privar << endl;
        cout << "The value of Protected Variable = "
             << t.provar;
    }
};

int main()
{
    myclass g;
    Frd f;
    f.display(g);
}

