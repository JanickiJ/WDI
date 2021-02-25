#include <iostream>
using namespace std;

struct node {
    int dana;
    node* next;
};

void del(node* head) {
    if (head == NULL) {
        return;
    }
    int suma = head->dana;
    node* tmp = head->next;
    while (tmp != NULL) {

        if (suma > tmp->dana) {
            head->next = tmp->next;
            delete tmp;
            tmp = head->next;
        }
        else {
            head = tmp;
            tmp = tmp->next;
            suma += head->dana;
        }

    }
}

void del1(node* head) {
    
    while (head != NULL && head->next != NULL) {
        node* tmp = head->next;
        if (tmp->dana < head->dana) {
            head->next = tmp->next;
            delete tmp;
        }
        else {
            head = head->next;
        }
    }
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
    b->dana = 8;
    c->dana = 7;
    d->dana = 9;
    e->dana = 5;

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = NULL;

    printList(a);
    del1(a);
    printList(a);
}

