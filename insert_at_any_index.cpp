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
    Node *v = new Node(val);
    if (head == NULL)
    {
        head = v;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = v;
    cout << "inseted " << endl
         << endl;
}
void print(Node *p)
{
    Node *tmp = p;
    while (tmp != NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}
void inserted(Node *head, int pos, int val)
{
    Node *vl = new Node(val);
    Node *tmp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }
    vl->next = tmp->next;
    tmp->next = vl;
    cout << "sfa" << endl;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Choice an option : " << endl;
        cout << "Option 1 is insert a tail" << endl;
        cout << "Option 2 is print NOde" << endl;
        cout << "Option 3 is insert any index" << endl;
        cout << "Option 4 is terminate program" << endl;
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
        else if (op == 3)
        {
            cout << "enter a postion : ";
            int p;
            cin >> p;
            cout << "Enter an value : ";
            int val;
            cin >> val;
            inserted(head, p, val);
        }

        else
            break;
    }
    return 0;
}