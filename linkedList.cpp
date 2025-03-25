#include <iostream>
using namespace std;

struct Node{
    double value;
    Node *next;
};

void insertAtEnd(Node*& head, double newVal){
    Node* newNode = new Node;
    newNode->value = newVal;
    newNode->next = nullptr;

    if(head == nullptr){
        head = newNode;
        return;
    }
    else{
        Node *temp = head;
        while(temp->next != nullptr){
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void remove(Node*& head, double num){
    Node* nodePtr, *prevNodePtr;

    if(head == nullptr){
        return;
    }

    if(head->value - num == 0){
        nodePtr = head;
        head = head->next;
        delete nodePtr;
        nodePtr = nullptr;
    }
    else{
        nodePtr = head;
        while(nodePtr != nullptr && (nodePtr->value - num) != 0){
            prevNodePtr = nodePtr;
            nodePtr = nodePtr->next;
        }

        if(nodePtr != nullptr){
            prevNodePtr = nodePtr -> next;
            delete nodePtr;
            nodePtr = nullptr;
        }
    }
}

void printList(Node* head){
    Node* cur = head;

    while(cur){
        cout << cur->value << "->";
        cur = cur->next;
    }
    cout << "NULL" << '\n';
}

int main(){
    Node* head = nullptr;

    insertAtEnd(head, 12.5);
    insertAtEnd(head, 13.5);
    // cout<<"1st Node: "<< head->value <<endl;
    // cout<<"2nd Node: "<< head->next->value<<endl;
    printList(head);
    return 0;
}