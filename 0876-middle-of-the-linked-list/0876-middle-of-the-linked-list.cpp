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
    ListNode* middleNode(ListNode* head) {
        ListNode*temp=head;
            ListNode*temp2=head;
            int c=0;
            while(temp!=NULL && temp->next!=NULL)
            {
                    c=c+2;
                    temp=temp->next->next;
                    temp2=temp2->next;
            }
            // c=c/2;
            // temp=head;
            // while(c){
            //         temp=temp->next;
            //         c--;
            // }
            return temp2;
    }
};