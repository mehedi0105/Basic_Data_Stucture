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
int main()
{
    int n;
    Node *head = NULL;
    while (true)
    {
        cin >> n;
        if (n == -1)
        {
            break;
        }
        else
            insert_at_tail(head, n);
    }
    print(head);
    return 0;
}