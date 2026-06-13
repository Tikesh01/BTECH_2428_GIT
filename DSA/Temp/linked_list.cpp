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
public:
    list(){
        head = tail = NULL;
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
        int data = tail->data;
        tail = NULL;
        cout<<"POP BACK "<<data<<endl;
        return data;
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
    ll->push_front(1);
    ll->push_front(33);
    ll->push_back(3);

    ll->traverse();

    ll->pop_front();
    ll->pop_back();

    ll->traverse();

    return 0;
}