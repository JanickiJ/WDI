#include <iostream>
using namespace std;

struct node {
    int dana1;
    int dana2;
    node* next;
};

void uniq(node*& head) {
    if (head == NULL) {
        return;
    }
    node* wartownik = new node;
    wartownik->next = head;
    node* prev = wartownik;
    while (head->next != NULL) {        
        node* tmp = head->next;
        int x = head->dana1;
        int y = head->dana2;

        bool flaga = false;
        while (!flaga && tmp != NULL ) {
         
            if (tmp->dana1 >= x && tmp->dana2 <= y) {
                tmp->dana2 = y;
                flaga = true;
            }
            else if (tmp->dana1 >= x && tmp->dana2 >= y) {
                tmp->dana1 = x;
                flaga = true;
            }
            else if (tmp->dana1 > x&& tmp->dana2 < y) {
                tmp->dana1 = x;
                tmp->dana2 = y;
                flaga = true;
            }
            else if (tmp->dana1 < x && tmp->dana2 > y) {
                flaga = true;
            }
            if (flaga == true) {
                prev->next = tmp->next;
                delete tmp;
            }
            if (flaga == false) {
                tmp = tmp->next;
            }
        }
        head = head->next;
    }
}


void printList(node* head) {
    while (head != NULL) {
        cout << head->dana1 << ";"<<head->dana2<<endl;
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

    a->dana1 = 1;
    b->dana1 = 3;
    c->dana1 = 5;
    d->dana1 = 6;
    e->dana1 = 9;
    a->dana2 = 2;
    b->dana2 = 4;
    c->dana2 = 6;
    d->dana2 = 7;
    e->dana2 = 10;



    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = NULL;

    printList(a);
    uniq(a);
    printList(a);
}