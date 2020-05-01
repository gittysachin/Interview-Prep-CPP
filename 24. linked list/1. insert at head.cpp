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

// class LinkedList {
//     node *head;
//     node *tail;

//     public:
//         LinkedList(){
//             head = NULL;
//             tail = NULL;
//         }
//         void insert(){

//         }
// };

// Passing a pointer variable by reference
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

int main(){
    node *head = NULL;
    insertAtHead(head, 4);
    insertAtHead(head, 6);
    insertAtHead(head, 2);

    print(head);

    return 0;
}