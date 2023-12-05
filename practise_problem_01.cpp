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
};
void count_in_size(Node *head)
{
    int cnt = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    cout << cnt << endl;
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
            insert_a_tail(head, input);
    }
    // print_linked_list(head);
    count_in_size(head);
    return 0;
}