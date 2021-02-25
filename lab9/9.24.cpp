#include <iostream>
using namespace std;
//nie dziala dla calego ciagu do usuniecia
struct node {
    int dana;
    node* next;
};

int del(node*& head1, node*& head2) {
    int suma = 0;
    node* wartownik1 = new node;
    node* wartownik2 = new node;
    wartownik1->next = head1;
    wartownik2->next = head2;
    node* prev1 = wartownik1;
    node* prev2 = wartownik2;
    bool flaga;

    while (head1 != NULL) {
            flaga = false;
            head2 = wartownik2->next;
            while (head2 != NULL && head2->dana <= head1->dana) {
                if (head1->dana == head2->dana) {
                    prev2->next = head2->next;
                    delete head2;
                    head2 = prev2->next;
                    suma++;
                    flaga = true;
                }
                else {
                    prev2 = head2;
                    head2 = head2->next;
                }
            }
             if (flaga) {
                prev1->next = head1->next;
                delete head1;
                head1 = prev1->next;
            }
            else {
                prev1 = head1;
                head1 = head1->next;
            }
    }

            head1 = wartownik1->next;
            head2 = wartownik2->next;
            delete wartownik1;
            delete wartownik2;
            return suma;
}

int usuwanie(node* head1, node* head2) {
    int suma = 0;
    if (head1 == NULL || head2 == NULL) {
        return suma;
    }

    node* wartownik1 = new node;
    node* wartownik2 = new node;
    wartownik1->next = head1;
    wartownik2->next = head2;
    
    node* prev1 = wartownik1;
    node* prev2 = wartownik2;
    bool flaga;

    while (head1 != NULL) {
        head2 = wartownik2->next;
        prev2 = wartownik2;
        flaga = false;
        while (head2 != NULL && head2->dana <= head1->dana ) {
            if (head1->dana == head2->dana) {
                prev2->next = head2->next;
                delete head2;
                suma++;
                head2 = prev2->next;
                flaga = true;
            }
            else {
                prev2 = head2;
                head2 = head2->next;
            }
        }
        if (flaga) {
            prev1 = head1->next;
            delete head1;
            head1 = prev2->next;
        }
        else{
            prev1 = head1;
            head1 = head1->next;
        }
    }
    head1 = wartownik1->next;
    head2 = wartownik2->next;
    delete wartownik1;
    delete wartownik2;
    return suma * 2;
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
    node* d1 = new node;
    node* e1 = new node;


    a->dana = 1;
    b->dana = 7;
    c->dana = 6;
    d->dana = 4;
    e->dana = 5;

    a1->dana = 3;
    b1->dana = 4;
    c1->dana = 8;
    d1->dana = 9;
    e1->dana = 10;

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = NULL;

    a1->next = b1;
    b1->next = c1;
    c1->next = d1;
    d1->next = e1;
    e1->next = NULL;

    node* head = new node;
    head->next = NULL;

    printList(a);
    printList(a1);
    cout << usuwanie(a, a1)<< endl;
    printList(a);
    printList(a1);

}

