#include <iostream>
using namespace std;

const int TABLE_SIZE = 13;

class HashTable {
private:
    int *table;
    bool *deleted;
    int hash1(int key);
    int hash2(int key);
public:
    HashTable();
    ~HashTable();
    void insert(int key);
    bool search(int key);
    void remove(int key);
    void display();
};

HashTable::HashTable() {
    table = new int[TABLE_SIZE]{0};
    deleted = new bool[TABLE_SIZE]{false};
}

HashTable::~HashTable() {
    delete[] table;
    delete[] deleted;
}

int HashTable::hash1(int key) {
    return key % TABLE_SIZE;
}

int HashTable::hash2(int key) {
    return 7 - (key % 7);
}

void HashTable::insert(int key) {
    int index = hash1(key);
    int step = hash2(key);
    int originalIndex = index;

    while (table[index] != 0 && table[index] != key) {
        index = (index + step) % TABLE_SIZE;
        if (index == originalIndex) {
            cout << "Hash table is full." << endl;
            return;
        }
    }

    table[index] = key;
    deleted[index] = false;
}

bool HashTable::search(int key) {
    int index = hash1(key);
    int step = hash2(key);
    int originalIndex = index;

    while (table[index] != 0) {
        if (table[index] == key && !deleted[index]) {
            return true;
        }
        index = (index + step) % TABLE_SIZE;
        if (index == originalIndex) {
            break;
        }
    }

    return false;
}

void HashTable::remove(int key) {
    int index = hash1(key);
    int step = hash2(key);
    int originalIndex = index;

    while (table[index] != 0) {
        if (table[index] == key && !deleted[index]) {
            deleted[index] = true;
            cout << "Key " << key << " is deleted from the hash table." << endl;
            return;
        }
        index = (index + step) % TABLE_SIZE;
        if (index == originalIndex) {
            break;
        }
    }

    cout << "Key " << key << " is not found in the hash table." << endl;
}

void HashTable::display() {
    cout << "Hash Table: ";
    for (int i = 0; i < TABLE_SIZE; i++) {
        if (!deleted[i]) {
            cout << table[i] << " ";
        } else {
            cout << "DELETED ";
        }
    }
    cout << endl;
}

int main() {
    HashTable hashTable;

    int key;
    int choice;

    do {
        cout << "\n1. Insert\n2. Search\n3. Remove\n4. Display\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the key to insert: ";
                cin >> key;
                hashTable.insert(key);
                break;
            case 2:
                cout << "Enter the key to search: ";
                cin >> key;
                if (hashTable.search(key)) {
                    cout << "Key " << key << " is found in the hash table." << endl;
                } else {
                    cout << "Key " << key << " is not found in the hash table." << endl;
                }
                break;
            case 3:
                cout << "Enter the key to remove: ";
                cin >> key;
                hashTable.remove(key);
                break;
            case 4:
                hashTable.display();
                break;
            case 5:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}
