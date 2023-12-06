
// Question: Take a singly linked list as input and check if the linked list
// contains any duplicate value. You can assume that the maximum value will be 100.

// Sample Input

// Sample Output
// 5 4 8 6 2 1 -1
// NO

// 2 4 5 6 7 4 -1
// YES
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
void insert_at(Node *&head, Node *&tail, int val)
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
void print_anser(Node *head)
{
    bool flag = false;
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val == j->val)
                flag = true;
        }
    }
    if (flag == false)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        else
            insert_at(head, tail, val);
    }
    print_anser(head);
    return 0;
}
// Sample Output
// 5 4 8 6 2 1 -1
// NO

// 2 4 5 6 7 4 -1
// YES
