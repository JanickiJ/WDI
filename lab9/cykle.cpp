#include <iostream>
using namespace std;

struct node {
    int dana;
    bool kolor;
    node* next;
};

bool czyCykl(node* head) {
    if (head == NULL) {
        return false;
    }
    node* fast = head->next;;
    node* slow=head;
    while (fast != NULL) {
        if (fast == slow) {
            return true;
        }
        fast = fast->next->next;
        slow = slow->next;
    }
    return false;
}

int dlugoscCyklu(node* head) {
    int dlugosc = 0;
    if (head == NULL) {
        return dlugosc;
    }
    if (!czyCykl) {
        return dlugosc;
    }
    node* fast = head->next;
    node* slow = head;
    while (fast != slow) {
        fast = fast->next->next;
        slow = slow->next;
    }
    dlugosc++;
    node* tmp = slow->next;
    while (tmp != slow) {
        dlugosc++;
        tmp = tmp->next;
    }
    return dlugosc;
}

int elementypozacyklem(node* head) {
    int counter = 0;
    if (head == NULL) {
        return 0;
    }
    if (!czyCykl) {
        while (head != NULL) {
            counter++;
            head = head->next;
        }
        return counter;
    }
    
    node* fast = head->next;
    node* slow = head;
    while (fast != slow) {
        slow->kolor = 0;
        fast = fast->next->next;
        slow = slow->next;
    }
    
    node* tmp = slow->next;
    slow->kolor = 1;
    while (tmp != slow) {
        tmp->kolor = 1;
        tmp = tmp->next;
    }
    while (head->kolor != 1) {
        counter++;
        head = head->next;
    }
    return counter;
}


node* ostatniprzedcyklem(node* head) {
    int x = elementypozacyklem(head);
    for (int i = 0; i < x-1; i++) {
        head = head->next;
    }
    return head;
}


void printList(node* head) {
    while (head != NULL) {
        cout << head->dana; 
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
    c->dana = 3;
    d->dana = 4;
    e->dana = 5;



    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = d;

   cout<<czyCykl(a)<<endl;
   cout << dlugoscCyklu(a)<<endl;
   cout << elementypozacyklem(a) << endl;
   cout << ostatniprzedcyklem(a)->dana;
 }