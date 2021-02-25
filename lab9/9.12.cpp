#include <iostream>
using namespace std;

struct node {
    int dana;
    node* next;
};

bool ParzIloscPiatek(int x) {
    int suma = 0;
    do {
        int a = x % 8;
        if (a == 5) {
            suma++;
        }
        x /= 8;
    } while (x != 0);

    if (suma % 2 == 0) {
        return true;
    }
    else return false;
}

void trans(node*& head) {
    if (head == NULL || head->next == NULL) {
        return;
    }
    node* tmp = head->next;
    node* prev = head;
    
    while (tmp != NULL) {
        if (ParzIloscPiatek(tmp->dana)) {
            prev->next = tmp->next;
            tmp->next = head;
            head = tmp;
            tmp = prev->next;
        }
        else {
            prev = prev->next;
            tmp = tmp->next;
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
    b->dana = 2;
    c->dana = 26987;
    d->dana = 5;
    e->dana = 0;

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = NULL;

    printList(a);
    trans(a);
    printList(a);
}

