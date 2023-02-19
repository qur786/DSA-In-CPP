#include <iostream>

using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node()
    {
        value = 0;
        next = NULL;
    }
    Node(int a)
    {
        value = a;
        next = NULL;
    }
    void addNewNode(Node *n)
    {
        next = n;
    }
};

int main()
{
    Node *HEAD = NULL;
    Node *current = NULL;
    int value;
    char cont = 'y';
    while (cont == 'y' || cont == 'Y')
    {
        cout << "next value: ";
        cin >> value;
        cin.ignore(1, '\n');
        cout << "Continue, y/n: ";
        cin >> cont;
        if (!HEAD)
        {
            Node *newNode = new Node(value);
            current = HEAD = newNode;
        }
        else
        {
            Node *newNode = new Node(value);
            current->addNewNode(newNode);
            current = current->next;
        }
    }

    cout << "Printing node: " << endl;
    current = HEAD;
    int count = 0;
    while (current)
    {
        count += 1;
        cout << "Node " << count << " : " << current->value << endl;
        current = current->next;
    }
    return 0;
}