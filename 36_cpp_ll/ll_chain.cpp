#include<iostream>
using namespace std;


class Node{

    public:
    int data;
    Node *next;

};

 int main(){

    Node *HEAD = new Node();


    HEAD->data = 11;
    HEAD->next = NULL;
    
    Node *current = new Node();
    
    current->data = 22; // 12345
    current->next = NULL;
    HEAD->next = current;
    
    current = new Node(); // 234567
    current->data = 33;
    current->next = NULL;
    HEAD->next->next = current;
    
    current = new Node(); 
    current->data = 44;
    current->next = NULL;
    HEAD->next->next->next = current;

    Node *ptr = HEAD;
    while(ptr != NULL)
    {
        cout << "D: "  << ptr->data << "A: " << ptr->next << endl; 
        ptr = ptr->next; 
    }




     return 0;
 }