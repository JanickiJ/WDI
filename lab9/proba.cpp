#include <iostream>
using namespace std;

struct node {
    int dana;
    node* next;

    node(int dana) {
        this->dana = dana;
        this->next = NULL;
    }
};
void rozdzielacz(node* list,node* buckets[10]) {
    for (int i = 0; i < 10; i++) buckets[i] = NULL;
    node* tmp;
    while (list != NULL) {
        tmp = list;
        list = list->next;
        tmp->next = buckets[tmp->dana%10];
        buckets[tmp->dana % 10] = tmp;
    }
}

node* sortowanie(node* buckets[10]) {
    node* wartownik = new node(-1);
    node* tmp = wartownik;
    for (int i = 0; i < 10; i++) {
            tmp->next = buckets[i];
            while (tmp->next != NULL) {
                tmp = tmp->next;
            }
    }
    node* head;
    head = wartownik->next;
    delete wartownik;
    return head;
}

void printList(node* head) {
    while (head != NULL) {
        cout << head->dana << " ";
        head = head->next;
    }
    cout << endl;
}

void addInFront(node*& list, node* element) {
    element->next = list;
    list = element;
}


node* processList(node* list) {
    node** buckets = new node * [10];
    rozdzielacz(list, buckets);
    return sortowanie(buckets);
}

int main() {
    node* list1 = NULL;

    addInFront(list1, new node(rand() % 100));
    addInFront(list1, new node(rand() % 100));
    addInFront(list1, new node(rand() % 100));
    addInFront(list1, new node(rand() % 100));
    addInFront(list1, new node(rand() % 100));
    addInFront(list1, new node(rand() % 100));
    addInFront(list1, new node(rand() % 100));
    addInFront(list1, new node(rand() % 100));
    addInFront(list1, new node(rand() % 100));
    addInFront(list1, new node(rand() % 100));

    printList(processList(list1));
}