#include <iostream>
using namespace std;

struct node {
    int dana;
    node * next;
};

void usunzCyklu(node*& head, int val) {
    node* tmp = head->next;
    node* prev = head;
    while (tmp != head) {
        if (tmp->dana == val) {
            prev->next = tmp->next;
            delete tmp;
            tmp = prev->next;
        }
        else {
            prev = tmp;
            tmp = tmp->next;
        }
    }
    if (tmp->dana == val) {
        prev->next = tmp->next;
        delete tmp;
        tmp = prev->next;
    }
    head = tmp;
}

void usunk(node*& head, int k) {
    node* wartownik = new node;
    wartownik->dana = -1;
    wartownik->next = head;
    node* tmp=head;
    while (tmp->next != head) {
        tmp = tmp->next;
    }
    tmp->next = wartownik;

    while (head != wartownik) {
        int ilosc = 1;
        tmp = head->next;
        while (tmp != head) {
            if (head->dana == tmp->dana) {
                ilosc++;
            }
            tmp = tmp->next;
        }
        cout << endl << head->dana << " " << ilosc << endl;

        if (ilosc == k) {
            int x = head->dana;
            usunzCyklu(head, x);
        }
        else {
            head = head->next;
        }
    }

    while (tmp->next != wartownik) {
        tmp = tmp->next;
    }

    tmp->next = wartownik->next;
    head = tmp->next;
    delete wartownik;

}




void printList(node* head) {
    while (head != NULL) {
        cout << head->dana << "  ";
        head = head->next;
    }
    cout << endl;
}

void printcykl(node* head) {
    node* tmp = head;
    if (head == NULL) {
        return;
    }
    do {
        cout << tmp->dana<<"  ";
        tmp = tmp->next;
    } while (tmp != head);
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


    a->dana = 2;
    b->dana = 1;
    c->dana = 3;
    d->dana = 4;
    e->dana = 5;

    a1->dana = 4;
    b1->dana = 3;
    c1->dana = 4;
    d1->dana = 4;
    e1->dana = 3;

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = a1;

    a1->next = b1;
    b1->next = c1;
    c1->next = d1;
    d1->next = e1;
    e1->next = a;

    printcykl(a);
    cout << "test" << endl;
    usunk(a, 3);
    cout << "test" << endl;
    printcykl(a);
}
