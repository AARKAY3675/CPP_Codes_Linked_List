/* INSERTION AND DISPLAY IN LINKED LIST */

#include<bits/stdc++.h>

using namespace std;
struct Node {
    int data;
    Node* next;
};                         // new node created which has an integer type data and a pointer named next

class Linkedlist        // class named lisked list with pointer head and initialized it to null
{
    private:
    Node* head;
    public:
    Linkedlist():head(nullptr){}

void insert(int value)    // insert function
{
 Node* newNode= new Node;
 newNode -> data = value;
 newNode -> next = head;
 head = newNode;
}
void display()            // display function
{
    Node* current = head;
    while(current != nullptr) {
        cout<< current-> data<<" ";
        current = current -> next;
    }
}
};
int main()   // main function
{
    Linkedlist L;     // object of class "linked list" 
    int n;
    cin>>n;
    for(int i =0;i<n;i++)   // inserting using loop
    {
        int value;
        cin>>value;
        L.insert(value); // insert fn calling
    }
    L.display(); // display fn calling
    return 0;
}
