/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==nullptr || headB ==nullptr)return nullptr;
        ListNode *tmp1=headA;
        ListNode *tmp2=headB;
        while(tmp1!=tmp2){
             tmp1=tmp1->next;
            tmp2=tmp2->next;
            if(tmp1==nullptr && tmp2==nullptr){
                return nullptr;
            }
            if(tmp1==nullptr)tmp1=headB;
            if(tmp2==nullptr)tmp2=headA;
           
        }
        return tmp1;

    }
};