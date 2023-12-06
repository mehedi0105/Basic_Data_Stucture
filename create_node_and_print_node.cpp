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
    print(Head);
    // cout << Head->val << " " << Head->next;

    return 0;
}