/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(nexnextt) {}
 * };
 */
class Solution {
public:
    ListNode* reverse(ListNode* node, ListNode* prev, ListNode* last)
    {
        ListNode* current = node;
        prev = last;
        while(current != last)
        {
            ListNode* tempNode = current->next;
            current->next = prev;
            prev = current;
            current = tempNode;
        }
        return prev;
    }

    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* result;
        ListNode* newHead = head;
        ListNode* node;
        ListNode* prev = nullptr;
        ListNode* last;
        int count = 1;
        while(head)
        {
            if(count<left) result = head;
            if(count == left) node = head;
            if(count == right) 
            {
                last = head->next;
                break;
            }
            head = head->next;
            count++;
        }
        if(left>1) 
        {
            result->next = reverse(node, prev, last);
            return newHead;
        }
        else 
        {
            result = reverse(node, prev, last);
            return result;
        }
    }
};
