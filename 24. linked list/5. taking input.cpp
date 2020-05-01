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

void print(node *head){
    node *temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void insertAtTail(node *&head, int data){
    if(head == NULL){
        head = new node(data);
        return;
    }
    node *tail = head;
    while(tail->next != NULL){
        tail = tail->next;
    }
    tail -> next = new node(data);
    return;
}

void buildList(node *&head){
    int data;
    cin >> data;
    while(data != -1){
        insertAtTail(head, data);
        cin >> data;
    }
}

int main(){
    node *head = NULL;

    buildList(head);

    print(head);

    return 0;
}