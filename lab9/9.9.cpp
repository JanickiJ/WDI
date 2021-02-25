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
    b->dana = 0;
    c->dana = 0;
    d->dana = 0;
    e->dana = 0;

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = NULL;

    printList(a);
    del(a);
    printList(a);
}

