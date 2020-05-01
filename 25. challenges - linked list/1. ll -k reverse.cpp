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

void insertAtTail(node *&head, int data){
    if(head == NULL){
        head = new node(data);
        return;
    }
    node *tail = head;
    while(tail -> next != NULL){
        tail = tail -> next;
    }
    tail -> next = new node(data);
    return;
}

void printList(node *head){
    while(head != NULL){
        cout << head -> data << " ";
        head = head -> next;
    }
}

node *reverse(node *&head, int k){
    int x = k;
    node *current = head;
    node *prev = NULL;
    node *nex = NULL;
    while(current != NULL && x>0){
        nex = current -> next;
        current -> next = prev;
        prev = current;
        current = nex;
        x--;
    }
    if(nex != NULL){
        head -> next = reverse(nex, k);
    }
    return prev;
}

int main(){
    int n, k;
    cin >> n >> k;
    node *head = NULL;
    int data;
    for(int i=0; i<n; i++){
        cin >> data;
        insertAtTail(head, data);
    }

    head = reverse(head, k);

    printList(head);

    return 0;
}