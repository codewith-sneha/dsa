
#include <iostream>
using namespace std;

struct Node {
    int data ;
    struct Node * next;

    Node(int value){
        data=value;
        next= nullptr;
    }
};

Node* head = nullptr;

// 1. Create linked list
void createList(int n) {

    Node* tail = nullptr;

    for (int i = 0; i < n; i++) {
        int value;
        cout << "Enter value: ";
        cin >> value;

        Node* newNode = new Node(value);

        if (head == nullptr) {
            head = newNode;
        } else {
            tail->next = newNode;
        }

        tail = newNode;
    }
}

// 2. Display list
void display() {
    if (head == nullptr) {
        cout << "List is empty\n";
        return;
    }

    Node* temp = head;

    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL\n";
}

// 3. Insert at beginning
void insertBeginning(int value) {
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

// 4. Insert at end
void insertEnd(int value) {
    Node* newNode = new Node(value);

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* temp = head;

    while (temp->next != nullptr) {
        temp = temp->next;
    }

    temp->next = newNode;
}

// 5. Insert at specified position
void insertPosition(int value, int pos) {
    if (pos < 1) {
        cout << "Invalid position\n";
        return;
    }

    if (pos == 1) {
        insertBeginning(value);
        return;
    }

    Node* temp = head;

    for (int i = 1; i < pos - 1 && temp != nullptr; i++) {
        temp = temp->next;
    }

    if (temp == nullptr) {
        cout << "Invalid position\n";
        return;
    }

    Node* newNode = new Node(value);

    newNode->next = temp->next;
    temp->next = newNode;
}

// 6. Delete from beginning
void deleteBeginning() {
    if (head == nullptr) {
        cout << "List is empty\n";
        return;
    }

    Node* temp = head;
    head = head->next;
    delete temp;
}

// 7. Delete from end
void deleteEnd() {
    if (head == nullptr) {
        cout << "List is empty\n";
        return;
    }

    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        return;
    }

    Node* temp = head;

    while (temp->next->next != nullptr) {
        temp = temp->next;
    }

    delete temp->next;
    temp->next = nullptr;
}

// 8. Delete from specified position
void deletePosition(int pos) {
    if (pos < 1 || head == nullptr) {
        cout << "Invalid position\n";
        return;
    }

    if (pos == 1) {
        deleteBeginning();
        return;
    }

    Node* temp = head;

    for (int i = 1; i < pos - 1 && temp != nullptr; i++) {
        temp = temp->next;
    }

    if (temp == nullptr || temp->next == nullptr) {
        cout << "Invalid position\n";
        return;
    }

    Node* del = temp->next;
    temp->next = del->next;
    delete del;
}

// 9. Search element
void search(int value) {
    Node* temp = head;
    int pos = 1;

    while (temp != nullptr) {
        if (temp->data == value) {
            cout << "Element found at position " << pos << "\n";
            return;
        }

        temp = temp->next;
        pos++;
    }

    cout << "Element not found\n";
}

// 10. Count nodes
int countNodes() {
    int count = 0;
    Node* temp = head;

    while (temp != nullptr) {
        count++;
        temp = temp->next;
    }

    return count;
}

// 11. Reverse linked list
void reverseList() {
    Node* prev = nullptr;
    Node* curr = head;
    Node* nextNode = nullptr;

    while (curr != nullptr) {
        nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }

    head = prev;
}

// 12. Exit and release memory
void clearList() {
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    int choice, value, pos, n;

    do {
        cout << "\n--- SINGLY LINKED LIST MENU ---\n";
        cout << "1. Create List\n";
        cout << "2. Display List\n";
        cout << "3. Insert at Beginning\n";
        cout << "4. Insert at End\n";
        cout << "5. Insert at Position\n";
        cout << "6. Delete from Beginning\n";
        cout << "7. Delete from End\n";
        cout << "8. Delete from Position\n";
        cout << "9. Search Element\n";
        cout << "10. Count Nodes\n";
        cout << "11. Reverse List\n";
        cout << "12. Exit\n";
        cout << "Enter choice: ";

        if (!(cin >> choice)) {
            cout << "Invalid input\n";
            break;
        }

        switch (choice) {
            case 1:
                cout << "Enter number of nodes: ";
                cin >> n;
                if (n < 0) {
                    cout << "Invalid number of nodes\n";
                    break;
                }
                createList(n);
                break;

            case 2:
                display();
                break;

            case 3:
                cout << "Enter value: ";
                cin >> value;
                insertBeginning(value);
                break;

            case 4:
                cout << "Enter value: ";
                cin >> value;
                insertEnd(value);
                break;

            case 5:
                cout << "Enter value and position: ";
                cin >> value >> pos;
                insertPosition(value, pos);
                break;

            case 6:
                deleteBeginning();
                break;

            case 7:
                deleteEnd();
                break;

            case 8:
                cout << "Enter position: ";
                cin >> pos;
                deletePosition(pos);
                break;

            case 9:
                cout << "Enter element to search: ";
                cin >> value;
                search(value);
                break;

            case 10:
                cout << "Total nodes: " << countNodes() << "\n";
                break;

            case 11:
                reverseList();
                cout << "List reversed\n";
                break;

            case 12:
                clearList();
                cout << "Exiting program\n";
                break;

            default:
                cout << "Invalid choice\n";
        }

    } while (choice != 12);

    clearList();
    return 0;
}
