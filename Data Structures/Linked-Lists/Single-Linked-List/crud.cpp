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
};

class LinkedList
{
private:
    Node *HEAD;

public:
    void insertNode(int value);
    void printList();
    void deleteNode(int value);
    LinkedList()
    {
        HEAD = NULL;
    }
};

void LinkedList::insertNode(int value)
{
    Node *newNode = new Node(value);
    if (HEAD == NULL)
    {
        HEAD = newNode;
    }
    else
    {
        Node *curr = HEAD;
        while (curr->next != NULL)
        {
            curr = curr->next;
        }
        curr->next = newNode;
    }
}

void LinkedList::printList()
{
    Node *curr = HEAD;
    int count = 0;
    while (curr != NULL)
    {
        count++;
        cout << "Node " << count << " : " << curr->value << endl;
        curr = curr->next;
    }
}

void LinkedList::deleteNode(int value)
{
    Node *curr = HEAD;
    Node *prevCurr = curr;
    if (HEAD->value == value)
    {
        HEAD = curr->next;
        delete curr;
    }
    else
    {
        while (curr != NULL && curr->value != value)
        {
            prevCurr = curr;
            curr = curr->next;
        }
        if (curr != NULL)
        {
            prevCurr->next = curr->next;
            delete curr;
        }
    }
}

int main()
{
    LinkedList list1;
    list1.insertNode(5);
    list1.insertNode(10);
    list1.printList();
    list1.insertNode(15);
    list1.printList();
    list1.deleteNode(10);
    list1.printList();
    return 0;
}