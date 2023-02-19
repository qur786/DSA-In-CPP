#include <iostream>

using namespace std;

namespace NameSpace1
{
    void display()
    {
        cout << "I am in NameSpace1" << endl;
    }
}

/**
Not possible, due to name collision
void display()
{
    cout << "I am outside of main" << endl;
}
*/

using namespace NameSpace1;

int main()
{
    display();
    return 0;
}