#include <iostream>
using namespace std;

struct node {
    string dana;
    node* next;
};

bool exist(node* head, string name) {
       
    while (head != NULL) {
        if (head->dana == name) {
            return true;
        }
        head = head->next;
    }
    return false;
}

bool napis(node*& head, string x) {
    if (exist(head, x)) {
        return false;
    }
    else {
        node* nowy = new node;
        nowy->dana = x;
        nowy->next = head;
        head = nowy;
        return true;
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

    a->dana = "acc";
    b->dana = "acc";
    c->dana = "ccc";
    d->dana = "dcc";
    e->dana = "ecc";

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = NULL;

    string x = "acd";
    printList(a);
    cout << exist(a, x) << endl;
    cout << napis(a, x) << endl;
    printList(a);
}

