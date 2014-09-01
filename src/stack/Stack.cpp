#include <iostream>
#include <stdlib.h>

using namespace std;

class Stack
{
private:
    struct Node
    {
        int data;
        struct Node *prev;
    } *node;

public:
    Stack()
    {
        node = NULL;
    }

    void push(int data)
    {

        Node *temp = new Node();
        temp -> data = data;
        temp -> prev = node;
        node = temp;

    }

    int pop()
    {
        int data = 0;
        if(node != NULL)
        {
            Node *temp = node;
            data = node -> data;
            node = node -> prev;
            free(temp);
        }
        else
        {
            cout << "[Underflow] Stack is empty.";
        }
        return data;
    }

};


int main()
{
    Stack s;
    s.push(23);
    s.push(43);

    cout << s.pop() << endl;
    cout << s.pop() << endl;
    s.pop();
    return 0;

}
