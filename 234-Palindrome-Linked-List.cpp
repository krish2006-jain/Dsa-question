class Solution {
public:
    ListNode *reversed(ListNode *head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        ListNode *tail = reversed(head->next);
        head->next->next = head;
        head->next = nullptr;

        return tail;
    }

    bool isPalindrome(ListNode* head) {

        if (head == nullptr || head->next == nullptr)
            return true;

        ListNode *low = head;
        ListNode *high = head;

        while (high->next != nullptr && high->next->next != nullptr) {
            low = low->next;
            high = high->next->next;
        }

        ListNode *newNode = reversed(low->next);

        ListNode *checker = head;
        ListNode *second = newNode;

        while (second != nullptr) {
            if (checker->val != second->val) {
                low->next = reversed(newNode);
                return false;
            }

            checker = checker->next;
            second = second->next;
        }

        low->next = reversed(newNode);
        return true;
    }
};