#include<iostream>
using namespace std;

class node{
public:
    long long int data;
    node* next;
    node(long long int data){
        this->data = data;
    }
};

void insert_at_head(node* &head,long long int data){
    head = new node(data);
    head->next = NULL;
}

void insert_at_tail(node* head,long long int data){
    while(head->next != NULL){
        head = head->next;
    }
    node* n = new node(data);
    head->next = n;
    n->next = NULL;
}

node* merge_recursive(node* a, node* b){
    if(a==NULL){
        return b;
    }
    else if(b==NULL){
        return a;
    }

    node* c;
    if(a->data < b->data){
        c= a;
        c->next = merge_recursive(a->next,b);
    }
    else{
        c = b;
        c->next = merge_recursive(a,b->next);
    }
    return c;
}

void print(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

int main() {
    int test;
    cin>>test;
    while(test--){
        node* head = NULL;
        node* head2 =NULL;
        long long int n;
        cin>>n;
        long long int key;
        // cin>>key;
        // insert_at_head(head,key);
        // for(long long int i=0;i<n-1;i++){
        for(long long int i=0;i<n;i++){
            cin>>key;
            if(i==0)
                insert_at_head(head,key);
            else
                insert_at_tail(head,key);
        }

        cin>>n;
        // cin>>key;
        // insert_at_head(head2,key);
        // for(long long int i=0;i<n-1;i++){
        for(long long int i=0;i<n;i++){
            cin>>key;
            if(i==0)
                insert_at_head(head2,key);
            else
                insert_at_tail(head2,key);
        }

        head = merge_recursive(head, head2);
        
        print(head);
        //cout<<endl;
    }
	return 0;
}