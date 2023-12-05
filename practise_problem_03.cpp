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
void insert_tail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}
// void print(Node *head)
// {
//     Node *tmp = head;
//     while (tmp != NULL)
//     {
//         cout << tmp->val << " ";
//         tmp = tmp->next;
//     }
// }
void new_print_two(Node *head, int pos, int poss)
{

    Node *tmp1 = head;
    for (int i = 0; i < poss; i++)
    {
        tmp1 = tmp1->next;
    }
    cout << tmp1->val << " ";
    Node *tmp = head;
    for (int i = 0; i < pos; i++)
    {
        tmp = tmp->next;
    }
    cout << tmp->val << endl;
}
void new_print(Node *head, int pos)
{
    Node *tmp = head;
    for (int i = 0; i < pos; i++)
    {
        tmp = tmp->next;
    }
    cout << tmp->val << endl;
}
void print(Node *head)
{
    int cnt = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        // cout << tmp->val << " ";
        cnt++;
        tmp = tmp->next;
    }
    // cout << cnt << endl;
    if (cnt % 2 != 0)
    {
        int pos = cnt / 2;
        new_print(head, pos);
    }
    else
    {
        int pos = cnt / 2;
        int poss = pos - 1;
        new_print_two(head, pos, poss);
    }
}
int main()
{
    Node *head = NULL;
    int input;
    while (true)
    {
        cin >> input;
        if (input == -1)
            break;
        else
            insert_tail(head, input);
    }

    print(head);
    return 0;
}