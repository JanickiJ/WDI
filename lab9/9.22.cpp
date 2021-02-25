#include <iostream>
using namespace std;

struct node {
    int dana;
    node* next;
};



bool include(node* head, node* head1) {
    if (head == NULL || head1 == NULL) {
        return false;
    }
    node* tmp1;
    node* tmp;

    while (head != NULL) {
        if (head->dana == head1->dana) {
            tmp1 = head1->next;
            tmp = head->next;
            while (tmp1!=NULL && tmp->dana == tmp1->dana) {
                tmp1 = tmp1->next;
                tmp = tmp->next;
            }
            if (tmp1 == NULL) {
                return true;
            }
            else {
                head = tmp;
            }
        }
        else {
            head = head->next;
        }
    }
    return false;
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

    a->dana = 1;
    b->dana = 2;
    c->dana = 3;
    d->dana = 4;
    e->dana = 5;

    a1->dana = 2;
    b1->dana = 3;
    c1->dana = 4;


    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = NULL;

    a1->next = b1;
    b1->next = c1;
    c1->next = NULL;


    cout << include(a,a1);

}
