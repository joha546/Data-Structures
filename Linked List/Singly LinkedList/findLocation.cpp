#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

class Solution {
public:
    int searchKey(int n, struct Node* head, int key) {
        int loc = -1; // Use -1 to indicate that the key is not found
        int pos = 1;  // Position starts at 1
        Node* temp = head;

        while (temp) {
            if (temp->data == key) {
                loc = pos;
                break; // Key found, exit the loop
            }
            temp = temp->next;
            pos++;
        }

        return loc;
    }
};

int main() {
    int n;
    cin >> n;
    int data;
    cin >> data;  // Initial value of Linked List (head)

    struct Node* head = new Node(data);
    struct Node* tail = head;

    for (int i = 0; i < n - 1; ++i) {
        cin >> data;
        tail->next = new Node(data);
        tail = tail->next;
    }
    int key;
    cin >> key;
    Solution ob;
    cout << ob.searchKey(n, head, key);

    return 0;
}
