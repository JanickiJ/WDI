#include <iostream>
using namespace std;

struct node {
    int dana;
    node* next;
};

node* add(node* head1, node* head2) {
    node* wartownik = new node;
    wartownik->next = NULL;
    wartownik->dana = -1;
    node* head = wartownik; 

    while (head1 != NULL && head2 != NULL) {
        node* nowy = new node;
        nowy->dana = head1->dana - head2->dana;
        nowy->next = NULL;
        head->next = nowy; 
        head = nowy; 
        head1 = head1->next;
        head2 = head2->next;
    }
    while(head1 != NULL) {
        head->next = head1;
    }
    while (head2 != NULL) {
        head->next = head2;
    }
    head = wartownik->next; 
    delete wartownik;
    return head;
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

    node* a1 = new node;
    node* b1 = new node;
    node* c1 = new node;
    node* d1 = new node;
    node* e1 = new node;


    a->dana = 7;
    b->dana = 2;
    c->dana = 1;
    d->dana = 4;
    e->dana = 3;

    a1->dana = 1;
    b1->dana = 2;
    c1->dana = 3;
    d1->dana = 4;
    e1->dana = 7;

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = NULL;

    a1->next = b1;
    b1->next = c1;
    c1->next = d1;
    d1->next = e1;
    e1->next = NULL;

    node* head = new node;
    head->next = NULL;

    printList(a);
    printList(a1);
    head=add(a, a1);
    printList(head);
}
