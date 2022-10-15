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
    ListNode* removeElements(ListNode* head, int val) {
        if (head == NULL) {
            return NULL;
        }
        ListNode* rightSideHead = removeElements(head->next, val);
        if (head->val == val) {
            return rightSideHead;
        }
        head->next = rightSideHead;
        return head;
    }
    ListNode* fully(ListNode* head, int val){
        // Iterative
        ListNode* dummy = new ListNode();
        dummy->next = head;
        ListNode* cur = dummy;
        
        while(cur->next!= NULL){
            if (cur->next->val == val) {
                cur->next = cur->next->next;
            } else {
                cur = cur->next;
            }
        }
        return dummy->next;
    }
    ListNode* littleImproved(ListNode* head,int val){
        ListNode* ans = new ListNode();
        ListNode* curr = ans;
        ListNode* ptr  =  head;
        
        while(ptr != NULL){
            if(ptr->val != val){
                curr->next = new ListNode(ptr->val);
                curr = curr->next;
            }
            ptr = ptr->next;
        }
        
        return ans->next;
    }
    ListNode* Modify(ListNode* head, int val){
        ListNode* tmp = head;
        head = NULL;
        ListNode* last = new ListNode(-1);
        head = last;
        while(tmp!=NULL){
            if(tmp->val != val){
                last->next= tmp;
                last=last->next;
            }
            tmp = tmp->next;
        }
        if(last!=NULL)
           last->next=NULL;
        return head->next;
    }
    ListNode* duplicateList(ListNode* head,int val){
        
        ListNode* nHead = new ListNode(-1);
        ListNode* dummy = nHead;
        ListNode* tmp = head;
        
        while(tmp!= NULL){
           if(tmp->val == val){
               tmp = tmp->next;
               continue;
           }
           nHead->next = new ListNode(tmp->val);
           tmp = tmp->next;
           nHead = nHead->next;
        }
        return dummy->next;
    }
};