#include <iostream>
#include <vector>
#include <stdlib.h>


using namespace std;



class Node{

public:

    int data;

    Node *next;

    Node() { data = 0; next = nullptr; }
    Node(int x) { data = x; next = nullptr; }
    Node(int x, Node *ptr) { data = x; next = ptr; }

};


Node *create_list(vector<int> arr){ 

    Node *head=nullptr, *ptr;

    head = new Node(arr[0]);

    for (int i=1; i<arr.size(); i++){
        
        ptr=head;
        while (ptr->next) ptr = ptr->next;
        ptr->next = new Node(arr[i]);
    }

    return head;
}



void print_list(Node *head) {
    while(head){
        cout<<head->data<< " ";
        head=head->next;
    }
    cout<<endl;
}




int main() {

    Node *head=nullptr;


    head = create_list({1, 2, 3, 4, 5, 6, 7, 8, 9});
    print_list(head);




}