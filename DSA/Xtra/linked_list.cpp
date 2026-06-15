#include<iostream>
using namespace std;
class node{
public:
    int data;
    node* next;    

    node(int val){  
        data = val;
        next = NULL;
    }
};

class list{
    node* head; 
    node* tail;
    node* temp;
public:
    list(){
        head = tail = NULL;
    }
    int get(int index) {
        if(head == NULL){
            return -1;
        }
        if(index<0){
            return -1;
        }
        temp = head;
        for(int i=0; i<index; i++){
            temp = temp->next;
            if(temp == NULL){
                return -1;
            }
        }
        return temp->data;
    }
    void push_front(int val){
        node* newNode = new node(val);
        if(head == NULL){
            head = tail = newNode;
            // cout<<"HEAD NULL"<<endl;
        }
        else{
            newNode->next = head;
            head = newNode;
            // cout<<"HEAD NOT NULL"<<endl;
        }
    }
    void push_back(int val){
        node* newNode = new node(val);
        if(head == NULL){
            head = tail = newNode;    
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
        // cout<<"PUSH BACK"<<endl;
    }
    int pop_front(){
        if(head == NULL){
            cout<<"The Linked list is empty!";
            return -1;
        }
        int data = head->data;
        head = head->next;

        return data;
    }
    int pop_back(){
        if(head == NULL){
            cout<<"The Linked list is empty!";
            return -1;
        }
        node* temp = head;
        while (temp->next != tail)
        {
            temp = temp->next;
        }

        int data = temp->data;
        temp->next = NULL;
        delete tail;
        tail = temp;
        
        return data;
    }
    void insert(int val, int pos){ // 0 based
        if(pos<=0){
            push_front(val);
            return;
        }
        node* temp = head;
        while (temp!=NULL && pos>1)
        {
            temp = temp->next;
            pos--;
        }
        // if(temp == NULL){
        //     push_back(val);
        //     return;
        // }
        node* newNode = new node(val);
        newNode->next = temp->next;
        temp->next = newNode;
    }
    void traverse(){
        node* temp = head;

        while (temp != NULL)
        {
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }   
};

int main(){ 
    list* ll = new list();

    // cout<<ll->get(0)<<endl;
    // cout<<ll->get(1)<<endl;
    
    // ll->push_front(1);
    // cout<<ll->get(0)<<endl;
    // cout<<ll->get(1)<<endl;

    // ll->push_front(33);
    // cout<<ll->get(0)<<endl;
    // cout<<ll->get(1)<<endl;
    // cout<<ll->get(2)<<endl;

    ll->push_back(3);

    ll->traverse();
    // ll->insert(5, 3);
    // // ll->pop_front();
    // // ll->pop_back();

    // ll->traverse();

    // ll->push_front(7);
    // ll->insert(4, 1);
    // ll->insert(3, 1);
    // ll->insert(10, 0);
    // ll->insert(0, 8);
    // ll->traverse();

    return 0;
}