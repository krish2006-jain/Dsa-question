/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode * getmiddle(ListNode*head){
        ListNode *low=head;
        ListNode *fast=head->next;
        while(fast!=nullptr && fast->next!=nullptr){
            low=low->next;
            fast=fast->next->next;
        }
        return low;
    }
    ListNode *mergelist(ListNode *left,ListNode *right){
        ListNode *newlist=new ListNode();
        ListNode *temp=newlist;
        while(left!=nullptr && right !=nullptr){
         if(left->val <right->val){
            temp->next=left;
            temp=left;
            left=left->next;
         }
         else{
            temp->next=right;
            temp=right;
            right=right->next;
         }
        }
        if(left)temp->next=left;
        if(right)temp->next=right;
        return newlist->next;
    }
    ListNode* sortList(ListNode* head) {
        if(head==nullptr ||head->next==nullptr)return head;
        ListNode*middle=getmiddle(head);
        ListNode *left=head;
        ListNode *right=middle->next;
        middle->next=nullptr;
        left=sortList(left);
        right=sortList(right);
    return mergelist(left,right);
    }
};