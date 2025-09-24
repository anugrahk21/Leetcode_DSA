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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* newnode=new ListNode(0);//new linkedlist creation(dummy node)
        ListNode* temp=newnode; //like a tail for adding nodes
        int carry=0;

        while(l1 !=nullptr || l2 !=nullptr || carry != 0){
            int sum=carry; //cause carry must be added for proper addition
            if(l1!=NULL){
                sum+=l1->val; //sum+carry+val
                l1=l1->next;
            }
            if(l2!=NULL){
                sum+=l2->val;
                l2=l2->next;
            }
            carry=sum/10;
            temp->next=new ListNode(sum%10); //new node adding at tail (last digit)
            temp=temp->next;
        }
        return newnode->next; //for excluding the 1st node(had dummy value(0)) and giving the correct starting node pointer.
    }
};