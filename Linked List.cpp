#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = NULL;
    }

    ~LinkedList() {
        while (head) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }

    void insert(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = NULL;

        if (!head) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next)
                temp = temp->next;
            temp->next = newNode;
        }
    }

    void deleteNode(int value) {
        if (!head)
            return;

        if (head->data == value) {
            Node* toDelete = head;
            head = head->next;
            delete toDelete;
            return;
        }

        Node* temp = head;
        while (temp->next && temp->next->data != value)
            temp = temp->next;

        if (temp->next) {
            Node* toDelete = temp->next;
            temp->next = temp->next->next;
            delete toDelete;
        }
    }

    void display() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    LinkedList list;
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.display();

    list.deleteNode(20);
    list.display();

    return 0;
}

