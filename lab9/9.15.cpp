#include <iostream>
using namespace std;

struct node {
    int dana;
    node* next;
};


int deluniq(node*& head){
    int suma = 0;
    if (head == NULL) {
        return 0;
    }
    node* wartownik = new node;
    wartownik->next = head;
    node* prevh = wartownik;
    
    while (head!=NULL && head->next != NULL) {
        node* prev = head;
        node* tmp = head->next;
        bool flaga = true;
        while (tmp != NULL) {
            if (tmp->dana == head->dana) {
                prev->next = tmp->next;
                delete tmp;
                suma++;
                tmp = prev->next;
                flaga = false;
            }
            else {
                prev = tmp;
                tmp = tmp->next;
            }

        }
        if (!flaga) {
            prevh->next = head->next;
            delete head;
            suma++;
            head = prevh->next;
        }
        else {
            prevh = head;
            head = head->next;
        }
    }

    head = wartownik->next;
    delete wartownik;
    return suma;
}


void delununiq(node*& head) {
    node* wartownik = new node;
    wartownik->next = head;
    node* prevh=wartownik;
    node* tmp = head->next;
    node* prevt = head;
    bool flaga=false;

    while (head != NULL && head->next != NULL) {
        flaga = false;
        tmp = head->next;
        while (tmp != NULL && !flaga) {
            tmp = tmp->next;
            if (tmp->dana == head->dana) {
                flaga = true;
            }
        }
        if (flaga) {
            prevt = head;
            tmp = head->next;
            while (tmp != NULL) {
                if (tmp->dana == head->dana) {
                    prevt->next = tmp->next;
                    delete tmp;
                    tmp = prevt->next;
                }
                else {
                    prevt = tmp;
                    tmp = tmp->next;
                }
            }
            prevh->next = head->next;
            delete head;
            head = prevh->next;
        }
        else {
            prevh = head;
            head = head->next;
        }
    }
    head = wartownik->next;
    delete wartownik;
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

    a->dana = 3;
    b->dana = 6;
    c->dana = 7;
    d->dana = 7;
    e->dana = 6;

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = NULL;

    printList(a);
    deluniq(a);
    printList(a);
}

