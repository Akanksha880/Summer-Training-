//given  the head of sorted linked list,delete all duplicates such that each appears one time.retuen the linked list sorted as well im c++
//take this as input 1,2,2,3,3,3 
//in first remobe the duplicate value only one at a time and i need the whole stages
/*#include <iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

void printList(ListNode* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

ListNode* deleteDuplicates(ListNode* head) {
    ListNode* current = head;
    while (current && current->next) {
        if (current->val == current->next->val) {
            ListNode* temp = current->next;
            current->next = current->next->next;
            delete temp;
            cout << "After removing  " << current->val << ": ";
            printList(head);
        } else {
            current = current->next;
        }
    }
    return head;
}

int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(3);
    head->next->next->next->next = new ListNode(3);
    head->next->next->next->next->next = new ListNode(3);

    cout << "Original List: ";
    printList(head);

    head = deleteDuplicates(head);

    cout << "Final List: ";
    printList(head);

    return 0;
}*/
//sir's solution
#include<iostream>

using namespace std;

class Node{

 public:

 int val;

 Node* next;

 Node(int data){

  val=data;

  next=NULL;

 }

};

class LinkedList{

 public:

 Node* head;

 LinkedList(){

  head=NULL;

 }

 void insertAtLast(int value){

  Node* new_node=new Node(value);

  if(head==NULL){

  head=new_node;

  return;

  }

  Node* temp=head;

  while(temp->next!=NULL){

  temp=temp->next;

  }

  //reached at last node

  temp->next=new_node;

 }

 void display(){

  Node* temp=head;

  while(temp!=NULL){

  cout<<temp->val<<"->";

  temp=temp->next;

  }

  cout<<"NULL"<<endl;

 }

};

void deleteDuplicateNodes(Node* &head){

 Node* current_node=head;

 while(current_node!=NULL){

 while(current_node->next!=NULL && current_node->val==current_node->next->val){

  //delete current_node->next

 Node* temp=current_node->next;//node to be deleted

 current_node->next=current_node->next->next;

 free(temp);

 }

 //this loop ends when cureent node and next node value are different

 //or linkedlist ends

 current_node=current_node->next;

 }

 //this loop will end when current node-next pointing to null

}

int main(){

 LinkedList linkedList;

 linkedList.insertAtLast(1);

 linkedList.insertAtLast(2);

 linkedList.insertAtLast(2);

 linkedList.insertAtLast(3);

 linkedList.insertAtLast(3);

 linkedList.display();

 deleteDuplicateNodes(linkedList.head);

 linkedList.display();

 return 0;

}



