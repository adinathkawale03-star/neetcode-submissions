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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head->next){
          return head->next;
        }
        int l=0;
        ListNode* temp=head;
        while(temp!=NULL){
          l++;
          temp=temp->next;
        }
        int cnt=l-n;
        if(cnt==0){
          return head->next;
        }
        temp=head;
        while(temp!=NULL){
          cnt--;
          if(cnt==0){
            temp->next=temp->next->next;
            return head;
          }
          temp=temp->next;
        }
        return head;


    }
};
