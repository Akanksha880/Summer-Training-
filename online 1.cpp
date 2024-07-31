#include <iostream>
using namespace std;

class Node {
public:
    int value;
    Node* next; // node pointing to next node/element

    Node(int data) {
        value = data;
        next = NULL;
    }
};

void insertAtHead(Node*& head, int value) {
    Node* new_node = new Node(value);
    new_node->next = head;
    head = new_node;
}

void insertAtLast(Node*& head, int value) {
    Node* new_node = new Node(value);
    Node* temp = head;
    if (temp == NULL) {
        head = new_node;
        return;
    }
    while (temp->next != NULL) {
        temp = temp->next;
    }
    // when temp reached at last node
    temp->next = new_node;
}

void displayList(Node* head) {
    while (head != NULL) {
        cout << head->value << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;

    // Create the initial list
    insertAtHead(head, 20);
    insertAtHead(head, 30);
    insertAtHead(head, 40);

    // Display the initial list
    cout << "Initial List: ";
    displayList(head);

    // Insert 10 at the head of the list
    insertAtHead(head, 10);

    // Display the list after insertion
    cout << "List after inserting 10 at the head: ";
    displayList(head);

    // Insert 50 at the end of the list
    insertAtLast(head, 50);

    // Display the list after insertion
    cout << "List after inserting 50 at the end: ";
    displayList(head);

    return 0;
}