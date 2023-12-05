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
void insert_a_tail(Node *&head, int val)
{
    Node *valu = new Node(val);

    if (head == NULL)
    {
        head = valu;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = valu;
}
void print(Node *head)
{
    cout << "yout tail value : ";

    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "choice a option : " << endl;
        cout << "option 1 insert a tail" << endl;
        cout << "option 2 prind linked list" << endl;
        cout << "option 3 terminate program" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Enter a value : ";
            int val;
            cin >> val;
            insert_a_tail(head, val);
        }
        else if (op == 2)
        {
            print(head);
        }
        if (op == 3)
        {
            break;
        }
    }
    return 0;
}