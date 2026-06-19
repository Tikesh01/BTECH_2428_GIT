#include<iostream>
using namespace std;

class node{
public:
    int val;
    node* next;
    node(int v){
        val =v;
        next = NULL;
    }
};
class linkedList{
    node* head;

public:
    linkedList(){head = NULL;}
    void push_front(int v){
        node* newNode = new node(v);
        if(head == NULL){
            head = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
    }
    linkedList(int arr[], int n=0){
        for(int i=0;i<n; i++ ){
            push_front(arr[i]);
        }
    }
    void traverse(){
        node* temp = head;
        while (temp != NULL)
        {
            cout<<temp->val<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }

    void reverse(){
        node *prev = NULL,*curr = head, *next= NULL;
        while(curr!= NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr= next;
        }
        head = prev;
    }
};

int main(){
    int arr[] = {2,36,2,1,0,28,1,23};
    linkedList *myList = new linkedList();
    myList->push_front(4);
    myList->push_front(3);
    myList->push_front(2);
    myList->push_front(1);

    myList->traverse();
    myList->reverse();
    myList->traverse();

    return 0;
}