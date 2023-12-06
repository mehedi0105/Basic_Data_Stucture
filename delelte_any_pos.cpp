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
void any_pos_insert(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 0; i < pos; i++)
        tmp = tmp->next;
    newNode->next = tmp->next;
    tmp->next = newNode;
}
void Delete_any_pos(Node *head, int pos)
{
    Node *tmp = head;
    for (int i = 0; i < pos - 1; i++)
        tmp = tmp->next;
    Node *newNode = tmp->next;
    tmp->next = tmp->next->next;
    delete newNode;
}
int size_lin(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}
void print(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
int main()
{
    Node *Head = new Node(10);
    Node *A = new Node(20);
    Node *B = new Node(30);
    Node *C = new Node(40);
    Node *D = new Node(50);
    Node *E = new Node(60);
    Node *F = new Node(70);
    Head->next = A;
    A->next = B;
    B->next = C;
    C->next = D;
    D->next = E;
    E->next = F;
    cout << "Enter Pos : ";
    int pos;
    cin >> pos;
    // cout << "Enter Value : ";
    // int val;
    // cin >> val;
    // if (pos > size_lin(Head))
    //     cout << "invalid";
    // else
    //     any_pos_insert(Head, pos, val);
    if (pos >= size_lin(Head))
        cout << "invalid";
    else
        Delete_any_pos(Head, pos);
    print(Head);
    // cout << Head->val << " " << Head->next;

    return 0;
}