#include <iostream>
using namespace std;

struct node {
    int dana1;
    node* next;
};

bool trojkowy(int x) {
    int suma1 = 0;
    int suma2 = 0;
    do {
        if ((x % 3) == 1) {
            suma1++;
        }
        if ((x % 3 )== 2) {
            suma2++;
        }
        x /= 3;
    } while (x != 0);
    
    if (suma1 > suma2) {
        return true;
    }
    else return false;
}

void del(node*& head) {
    if (head == NULL) {
        return;
    }

    node* wartownik = new node;
    wartownik->next = head;
    node* tmp = head;
    node* prev = wartownik;
    
    while (tmp != NULL) {
        if (trojkowy(tmp->dana1)) {
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
        cout << head->dana1 <<" ";
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

    a->dana1 = 43;
    b->dana1 = 43;
    c->dana1 = 42;
    d->dana1 = 41;
    e->dana1 = 43;


    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = NULL;

    printList(a);
    del(a);
    printList(a);

}