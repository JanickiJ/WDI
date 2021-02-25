#include <iostream>
using namespace std;

struct node {
    int dana;
    node* next;
};

int rozdzielacz(node* head, node*& head1, node*& head2) {
    int suma = 0;
    node* wartownik1 = head1;
    node* wartownik2 = head2;
    node* prevh = new node;
    prevh->next = head;

    while (head != NULL) {
        if (head->dana > 0 && head->dana % 2 == 0) {
            head1->next = head;
            head1 = head1->next;
            prevh = head;
            head = head->next;
        }
        else if (head->dana < 0 && head->dana % 2 == 1) {
            head2->next = head;
            head2 = head2->next;
            prevh = head;
            head = head->next;

        }
        else {
            prevh->next = head->next;
            delete head;
            head = prevh->next;
            suma++;
        }
    }
    head1 = wartownik1->next;
    head2 = wartownik2->next;
    return suma;
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
    b->dana = 7;
    c->dana = 2;
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

    node* head1 = new node;
    head1->next = NULL;
    
    node* head2 = new node;
    head2->next = NULL;
    

    printList(a);
    
    cout << rozdzielacz(a, head1, head2) << endl;
    printList(head1);
    printList(head2);

}
