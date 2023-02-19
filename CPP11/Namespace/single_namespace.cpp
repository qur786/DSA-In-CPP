#include <iostream>

using namespace std;

namespace NameSpace1
{
    void display()
    {
        cout << "I am in NameSpace1" << endl;
    }
}

void display()
{
    cout << "I am outise of main" << endl;
}

int main()
{
    NameSpace1::display();
    display();
    return 0;
}