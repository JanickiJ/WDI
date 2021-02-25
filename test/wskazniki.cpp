#include <iostream>
using namespace std;

struct node {
	int dana;
	node* next;
};

bool siodemkowy(int x) {
	int len = 0;
	while (x > 0) {
		x /= 7;
		len++;
	}
	if (len > 7) {
		return false;
	}
	return true;
}

bool podzielne(int x) {
	if ( x % 3 == 0 || x % 2 == 0) {
		return true;
	}
	return false;
}

void podzial(node* head, node*& head1, node*& head2) {
	node* tmp  = head;
	node* tmp1 = head1;
	node* prev;
    bool flaga;
	do{  
        flaga = false;
		if (siodemkowy(tmp->dana)) {
			tmp1->next = tmp;
			tmp1 = tmp1->next;
			tmp1->next = NULL;
		}
	     if (podzielne(tmp->dana)) {
			prev = tmp;
			tmp = tmp->next;
			prev->next = head2;
			head2 = prev;
            flaga = true;
		}
         if(!flaga){
             tmp = tmp->next;
         }
	} while(tmp != head);

	head1 = head1->next;
	tmp->next = head1;
	node* tmp2 = head2->next;
	while (tmp2->next != NULL) {
		tmp2 = tmp2->next;
	}
	tmp2->next = head2;
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
        cout << tmp->dana << "  ";
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


    a->dana = 17;
    b->dana = 1;
    c->dana = 3;
    d->dana = 4;
    e->dana = 5;

    a1->dana = 4;
    b1->dana = 3;
    c1->dana = 13;
    d1->dana = 4;
    e1->dana = 7;

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
    node* head1 = new node;
    node* head2 = new node;
    head1->next == NULL;
    head2->next == NULL;
    head1->dana = -1;
    head2->dana = -1;
    printcykl(a);
    podzial(a, head1, head2);
    printcykl(head1);
    printcykl(head2);
}

