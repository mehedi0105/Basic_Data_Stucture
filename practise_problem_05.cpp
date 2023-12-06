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
void insert_val(Node *&head, Node *&tail, int val)
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
void cheak_insert(Node *head)
{
    bool flag = false;
    Node *tmp = head;
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val > j->val)
                flag = true;
        }
    }

    if (flag == false)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int take_input;
    while (true)
    {
        cin >> take_input;
        if (take_input == -1)
            break;
        else
            insert_val(head, tail, take_input);
    }
    cheak_insert(head);
    return 0;
}