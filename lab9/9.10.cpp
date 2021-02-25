#include <iostream>
using namespace std;

struct node {
    int dana;
    node* next;
};

void del(node*& head) {
    if (head == NULL) {
        return;
    }

    node* wartownik = new node;
    wartownik->next = head;
    node* tmp = head;
    node* prev = wartownik;
    while (tmp->next != NULL) {
        int x = (tmp->next->dana) % (tmp->dana);
        if (x == 0) {
            prev->next = tmp->next;
            delete tmp;
            tmp = prev->next;
        }
        else {
            tmp = tmp->next;
            prev = prev->next;
        }
    }
    head = wartownik->next;
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
    c->dana = 6;
    d->dana = 12;
    e->dana = 24;

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = NULL;

    printList(a);
    del(a);
    printList(a);
  
}

