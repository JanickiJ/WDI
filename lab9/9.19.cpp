#include <iostream>
using namespace std;

struct node {
    int dana;
    node* next;
};



bool czyCykl(node*& head) {
    if (head == NULL) {
        return false;
    }
    node* fast = head->next;
    node* slow = head;
    while (fast != NULL && fast->next != NULL) {
        if (slow == fast) {
            return true;
        }
        slow = slow->next;
        fast = fast->next->next;
    }
    return false;
}



void printList(node* head) {
    while (head != NULL) {
        cout << head->dana << "  ";
        head = head->next;
    }
    cout << endl;
}


int main() {
    node* a = new node;
    node* b = new node;
    node* c = new node;
    node* d = new node;
    node* e = new node;

    a->dana = 1;
    b->dana = 3;
    c->dana = 2;
    d->dana = 2;
    e->dana = 2;

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = NULL;

    cout<<czyCykl(a);

}

