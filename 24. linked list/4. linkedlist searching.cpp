#include<iostream>
using namespace std;

class node {
    public: 
        int data;
        node *next;

        // constructor 
        node(int d){
            data = d;
            next = NULL;
        }
};

void insertAtHead(node *&head, int data){
    node *n = new node(data);
    n->next = head;
    head = n;
}

void print(node *head){
    node *temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

bool searchRecursive(node *head, int key){
    if(head == NULL){
        return false;
    }
    if(head->data == key){
        return true;
    }
    else {
        searchRecursive(head->next, key);
    }
}

bool searchItereative(node *head, int key){
    while(head != NULL){
        if(head->data == key){
            return true;
        }
        head = head -> next;
    }
    return false;
}

int main(){
    node *head = NULL;
    insertAtHead(head, 4);
    insertAtHead(head, 6);
    insertAtHead(head, 2);

    print(head);

    if(searchRecursive(head, 4)){   // searchIterative(head, 4)
        cout << "Element is present!";
    }
    else {
        cout << "Not present";
    }

    return 0;
}