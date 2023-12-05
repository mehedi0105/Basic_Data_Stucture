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
void insert_at_tail(Node *&head, int val)
{
    Node *vall = new Node(val);
    if (head == NULL)
    {
        head = vall;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = vall;
}
void insert_any_index(Node *head, int pos, int val)
{
    Node *any = new Node(val);
    Node *tmp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }
    any->next = tmp->next;
    tmp->next = any;
}
void print(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void insert_in_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head->next;
    head = newNode;
}
void delete_pos(Node *head, int pos)
{
    Node *tmp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }
    Node *newNode = tmp->next;
    tmp->next = tmp->next->next;
    delete newNode;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Choice an program : " << endl;
        cout << "Option 1 insert a tail" << endl
             << "Option 2 insert any index" << endl
             << "Option 3 print Node" << endl
             << "Option 4 insert in head" << endl
             << "Option 5 deleat any position" << endl
             << "Option 6=> program terminate" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Enter an value : ";
            int val;
            cin >> val;
            insert_at_tail(head, val);
        }
        else if (op == 2)
        {
            cout << "Enter an postion : ";
            int pos;
            cin >> pos;
            cout << endl;
            cout << "Enter an value : ";
            int val;
            cin >> val;
            if (pos == 0)
            {
                insert_in_head(head, val);
            }
            else
            {
                insert_any_index(head, pos, val);
            }
        }
        else if (op == 3)
        {
            print(head);
        }
        else if (op == 4)
        {
            cout << "Enter an Value :";
            int val;
            cin >> val;
            insert_in_head(head, val);
        }
        else if (op == 5)
        {
            cout << "Enter deleate pos: ";
            int pos;
            cin >> pos;
            delete_pos(head, pos);
        }
        else
            break;
    }
    return 0;
}