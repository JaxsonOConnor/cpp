#include <iostream>

struct ListNode {
public:
    int value;
    ListNode *next;
    ListNode() {this->value = 0; this->next = nullptr;}
    ListNode(int x) {this->value = x; this->next = nullptr;}
    ListNode(int x, ListNode *next) {this->value = x; this->next = next;}
};

void printSinglyLinkedList(ListNode *list) {
    ListNode* lnP = list; // make a copy
    do {
        std::cout << lnP->value << std::endl;
        lnP = lnP->next;
    } while (lnP != nullptr);
}

class Solution {
public:
    ListNode* reverseSinglyLinkedList(ListNode *list) {
        ListNode* lnPrevious = nullptr;
        ListNode* lnCurrent = list;
        ListNode* lnNext = nullptr;

        while (lnCurrent != nullptr) {
            lnNext = lnCurrent->next;
            lnCurrent->next = lnPrevious;
            lnPrevious = lnCurrent;
            lnCurrent = lnNext;
        }
        return lnPrevious;
    }
};

int main(int argc, char **argv) {
    ListNode* num = new ListNode(
        1,
        new ListNode(2,
        new ListNode(3,
        new ListNode(4)
    )));

    Solution s;
    printSinglyLinkedList(s.reverseSinglyLinkedList(num));

    return 0;
}