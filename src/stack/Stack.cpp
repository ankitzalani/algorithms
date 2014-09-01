#include <iostream>

using namespace std;

class Stack
{
private:
    struct Node
    {
        int data;
        struct Node *next;
    } *start, *node;

public:
    Stack()
    {
        node = NULL;
        start = node;
    }

    void push(int data)
    {

        Node *temp = new Node();
        temp -> data = data;
        temp -> next = NULL;

        if(node == NULL)
        {
            node = temp;
        }
        else
        {
            node -> next = temp;
        }
        node = node -> next;
    }

    void print()
    {
        Node *n = start;
        while(n -> next != NULL)
        {
            cout << n -> data;
            n = n -> next;
        }
    }

};


int main()
{
    Stack s;
    s.push(23);
    s.push(43);

    s.print();
    return 0;

}
