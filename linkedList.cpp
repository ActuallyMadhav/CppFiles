#include <iostream>
using namespace std;

struct Node{
    double value;
    Node *next;
};

Node* reverseList(Node*& head){
    Node* cur = head;
    Node* prev = nullptr;

    while(cur){
        Node* temp = cur->next;
        cur-> next = prev;
        prev = cur;
        cur = temp;
    }

    head = prev;
    return head;
}

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

void destroyList(Node *& head){
    Node *nodePtr = head;
    Node *garbage = nullptr;

    while(nodePtr != nullptr){
        garbage = nodePtr;
        nodePtr = nodePtr->next;
        delete garbage;
        garbage = nullptr;
    }
    head = nullptr;
}

int main(){
    Node* head = nullptr;

    insertAtEnd(head, 12.5);
    insertAtEnd(head, 13.5);
    insertAtEnd(head, 14.5);
    // cout<<"1st Node: "<< head->value <<endl;
    // cout<<"2nd Node: "<< head->next->value<<endl;
    printList(head);
    reverseList(head);
    //destroyList(head);
    printList(head);
    return 0;
}