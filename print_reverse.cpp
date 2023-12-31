#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void print_recursion(Node *head)
{
    if (head == NULL)
        return;
    cout << head->val << " ";
    print_recursion(head->next);
}
void print_reverse(Node *head)
{
    if (head == NULL)
        return;
    print_reverse(head->next);
    cout << head->val << " ";
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int input;
    while (true)
    {
        cin >> input;
        if (input == -1)
            break;
        else
            insert_tail(head, tail, input);
    }
    print_recursion(head);
    cout << endl;
    print_reverse(head);
    return 0;
}