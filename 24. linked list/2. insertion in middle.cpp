#include<iostream>
using namespace std;

class node {
    public:
        int data;
        node *next;

        node(int d){
            data = d;
            next = NULL;
        }
};

void insertAtHead(node *&head, int data){
    node *n = new node(data);
    n -> next = head;
    head = n;
}

int len(node *head){
    int len = 0;
    while(head!=NULL){
        len ++;
        head = head -> next;
    }
    return len;
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

void insertInMiddle(node *&head, int data, int pos){
    if(head == NULL || pos == 0){
        insertAtHead(head, data);
    } 
    else if(pos > len(head)){
        insertAtTail(head, data);
    }
    else {
        // insert at the middle 
        // take pos-1 jumps 
        int jump = 1;
        node *temp = head;
        while(jump<=pos-1){
            temp = temp -> next;
            jump ++;
        }
        node *n = new node(data);
        n->next = temp->next;
        temp->next = n;
    }
}

void print(node *head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main(){
    node *head = NULL;
    insertAtHead(head, 4);
    insertAtHead(head, 6);
    insertAtHead(head, 2);
    insertAtTail(head, 7);

    insertInMiddle(head, 2, 3);

    print(head);

    return 0;
}