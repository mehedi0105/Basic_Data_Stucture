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
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val > j->val)
            {
                swap(i->val, j->val);
            }
        }
    }
}
void print(Node *head)
{
    // int sum = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        // sum = sum + tmp->val;
        tmp = tmp->next;
    }
    // return sum;
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
    print(head);
    // cout << print(head);
    return 0;
}