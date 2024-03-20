/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp = list1;
        ListNode* an = nullptr;
        ListNode* bn = nullptr;
        int index = 0;
        while (temp != nullptr) {
            if (index == a - 1)
                an = temp;
            else if (index == b)
                bn = temp->next;
            temp = temp->next;
            ++index;
        }
        an->next = list2;
        ListNode* tailList2 = getTail(list2);
        tailList2->next = bn;

        return list1;
    }
    ListNode* getTail(ListNode* node) {
        while (node->next != nullptr) {
            node = node->next;
        }
        return node;
    }
};
