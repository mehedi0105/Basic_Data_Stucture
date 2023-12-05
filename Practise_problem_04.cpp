// Question: Take a singly linked list as input, then take q queries. In each query you will be
// given an index and value. You need to insert those values in the given index and print the linked
//  list. If the index is invalid print “Invalid”.

// Sample Input
// Sample Output
// 10 20 30 -1
// 7
// 1 40
// 5 50
// 4 50
// 0 100
// 7 40
// 1 110
// 7 40
// 10 40 20 30
// Invalid
// 10 40 20 30 50
// 100 10 40 20 30 50
// Invalid
// 100 110 10 40 20 30 50
// 100 110 10 40 20 30 50 40
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
void take_input_at_tail(Node *&head, int val)
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
void insert_any_index(Node *head, int pos, int val)
{
    Node *vall = new Node(val);
    Node *tmp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp->next == NULL)
        {
            cout << "Invalid" << endl;
            return;
        }
    }
    vall->next = tmp->next;
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
}
int main()
{
    Node *head = NULL;

    int input;
    while (true)
    {
        cin >> input;
        if (input == -1)
        {
            break;
        }
        else
            take_input_at_tail(head, input);
    }
    // cout << "choice an Option" << endl;
    // cout << "Option 1 insert any pos" << endl
    //      << "Option 2 print linkedlist"
    //      << "other terminate program" << endl;
    int size;
    cin >> size;
    while (size--)
    {
        int pos, val;
        cin >> pos >> val;
        insert_any_index(head, pos, val);
        print(head);
    }

    return 0;
}

// 10 20 30 -1
// 7
// 1 40
// 5 50
// 4 50
// 0 100
// 7 40
// 1 110
// 7 40

// 10 40 20 30
// Invalid
// 10 40 20 30 50
// 100 10 40 20 30 50
// Invalid
// 100 110 10 40 20 30 50
// 100 110 10 40 20 30 50 40
