 // C++ program to check if two linked lists
// are identical or not
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};

// Returns true if linked lists head1 and head2 are
// identical, otherwise false
bool areIdentical(Node *head1, Node *head2)
{
    while (head1 != nullptr && head2 != nullptr)
    {
        if (head1->data != head2->data)
            return false;

        // Move to next nodes in both lists 
        head1 = head1->next;
        head2 = head2->next;
    }

    // If linked lists are identical,
    // both 'head1' and 'head2' must be NULL
    return (head1 == nullptr && head2 == nullptr);
}

int main()
{
    // Create first linked list: 3 -> 2 -> 1
    Node *head1 = new Node(3);
    head1->next = new Node(2);
    head1->next->next = new Node(1);

    // Create second linked list: 3 -> 2 -> 1
    Node *head2 = new Node(3);
    head2->next = new Node(2);
    head2->next->next = new Node(1);

    // Function call
    if (areIdentical(head1, head2))
        cout << "True";
    else
        cout << "False";

    return 0;
}