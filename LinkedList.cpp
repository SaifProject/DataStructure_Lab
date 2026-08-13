#include<iostream>
using namespace std;

struct Node{

  int data;
  Node* next;

};

Node* head = nullptr;

Node* getNode(int val){
    Node* newNode= new Node();
    newNode->data=val;
    newNode->next=nullptr;
    return newNode;
}

void insertFirst(int val){
    Node* newNode=getNode(val);
    newNode->next=head;
    head=newNode;
}

void insertLast(int val){
    Node* newNode= getNode(val);
    if(head==nullptr){
        head=getNode(val);
    }
    else{
        Node* temp=head;
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        temp->next=newNode;
    }
}

void deleteFirst(){
    if(head==nullptr){
        cout<<"Empty"<<endl;
    }
    else{
        head=head->next;
    }
}

void deletlast(){
Node* temp=head;
while(temp->next->next!=nullptr){
    temp=temp->next;
}



}





void insertPos(int val,int pos){
    Node* newNode = getNode(val);

if(head==nullptr){
    cout<<"Head is Empty"<<endl;
}
else{

    Node* temp=head;
    for(int i=1; i<pos-1; i++){
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;
    }
}

void display(){
Node* temp=head;

if(temp==nullptr){
    cout<<"empty"<<endl;
}
else{
    while(temp != nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
}



int main()
{
    // Insert at First
    insertFirst(20);
    insertFirst(10);

    cout << "After Insert First: ";
    display();
    cout << endl;


    // Insert at Last
    insertLast(30);
    insertLast(40);

    cout << "After Insert Last: ";
    display();
    cout << endl;


    // Insert at Position
    insertPos(25, 3);

    cout << "After Insert at Position 3: ";
    display();
    cout << endl;


    // Delete First
    deleteFirst();

    cout << "After Delete First: ";
    display();
    cout << endl;


    return 0;
}






