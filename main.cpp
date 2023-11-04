#include <iostream>
using namespace std ;

struct Node {
    int data;
    Node* next;
};

void add(Node*& head, int Data) {
    Node* newNode = new Node;
    newNode->next = NULL;
    newNode->data = Data;
    if (head == NULL) {
        head = newNode;
        head->next =NULL;
    } else {
        Node* current = head;
        while (current->next != NULL && current->next != head) {
            current = current->next;
        }
        current->next = newNode;
        newNode->next = head;
    }
}


int length(Node*& head){
    Node* current = head ;
    int counter = 0 ;
    while (current != NULL){
        counter ++ ;
        if (current -> next == head) {
            break ;
        }
        current = current -> next ;
    }
    return counter ;
}

void display(const Node* head) {
    const Node* current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
        if (current == head) {
            break;
        }
    }
    cout << endl;
}

void remove(Node*& head, int element) {
    if (head == NULL) {
        return;
    }

    Node* current = head;
    Node* prev = NULL;

    if (head -> data == element){
        int len = length(head);
        for ( int i = 1 ; i < len ; i++){
            current = current -> next ;
        }
        current -> next = head -> next ;
        Node* temp = head ;
        head = head -> next ;
        delete temp ;
        return ;
    }

    while (current != NULL && current->data != element) {
        prev = current;
        current = current->next;
    }

    if (current == NULL) {
        return;
    }

    if (prev == NULL) {
        head = current->next;
    } else {
        prev->next = current->next;
    }

    delete current;
}


int flaviousJosephus(Node*& head , int mode){
    Node* current = NULL ;
    if (mode == 1) {
        current = head;
    } else if (mode == 2){
    	if (length(head) == 1){
    		return head -> data ;
		}
        current = head -> next ;
    } else {
        return -1;
    }
    if (length(head) == 1){
        return current -> data ;
    } else if (length(head) == 0){
        return -1 ;
    }
    while (current -> next != current){
        int temp = current -> data ;
        if (length(head) == 2){
            return current -> next -> data ;
        }
        current = current -> next -> next ;
        remove(head , temp);
    }
}

int main() {

    Node* head = NULL ;

    int num , mode ;
    cout << "Number of person :" ;
    cin >> num ;
    cout << endl << "1 : Start by eliminating the first person     2 : Start by eliminating the second person" << endl ;
    cout << "Mode :" ;
    cin >> mode ;
    cout << endl ;
    for (int i = 0 ; i < num ; i ++ ){
        add(head , i+1);
    }
    display(head);
    cout << endl << "Remaining person number: " << flaviousJosephus(head, mode) ;



    return 0;
}