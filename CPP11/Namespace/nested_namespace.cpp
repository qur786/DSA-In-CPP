#include <iostream>

using namespace std;

namespace NameSpace1
{
    void display()
    {
        cout << "I am in NameSpace1" << endl;
    }

    namespace NameSpace2
    {
        void display()
        {
            cout << "I am in NameSpace2" << endl;
        }
    }
}

void display()
{
    cout << "I am outise of main" << endl;
}

int main()
{
    NameSpace1::display();
    NameSpace1::NameSpace2::display();
    display();
    return 0;
}