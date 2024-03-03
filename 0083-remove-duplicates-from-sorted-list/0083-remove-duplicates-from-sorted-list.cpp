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
        ListNode*removeDuplicates(ListNode*&head){
                ListNode* currNode=head;
                ListNode* nextNode=currNode->next;
                
                while(nextNode!=NULL){
                        if(currNode->val==nextNode->val){
                                ListNode*temp=nextNode;
                                nextNode=nextNode->next;
                                currNode->next=nextNode;
                                temp->next=NULL;
                                delete temp;
                        }
                        else{
                                currNode=nextNode;
                                nextNode=nextNode->next;
                        }
                }
                return head;
                        
        }
        
    ListNode* deleteDuplicates(ListNode* head) {
            if(head==NULL || head->next==NULL)
                    return head;
                    
       return removeDuplicates(head); 
    }
};