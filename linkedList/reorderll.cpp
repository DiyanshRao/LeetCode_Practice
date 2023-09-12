/*

 Question Statement ?
 
You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list.
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL ){
            return list2;
        }
        if(list2 == NULL){
            return list1;
        }
        ListNode * head = new ListNode();
        ListNode * curr = head;
        while(list1 != NULL && list2 != NULL){
            if(list1->val <= list2->val){
                curr->next = list1;
                list1 = list1->next;
            }
            else{
                curr->next =list2;
                list2 = list2->next;
            }
            curr = curr->next;
        }
        if(list1 == NULL && list2){
            curr->next = list2;
        }
        if(list1 && list2 == NULL){
            curr->next = list1;
        }
        return head->next;
        
    }
};