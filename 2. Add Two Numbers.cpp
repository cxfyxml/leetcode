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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *l3= (ListNode*)malloc(sizeof(ListNode));
        long int a=0,b=0,k=1,c=0;
        while(l1!=NULL){
            a += l1->val*k;
            l1=l1->next;
            k=k*10;
        }
        k=1;
        while(l2!=NULL){
            b += l2->val*k;
            l2=l2->next;
            k=k*10;
        }
        c= a+b;
        cout<<a<<"--"<<b<<"--"<<c;
        if(c/10==0){
            l3 = (ListNode*)malloc(sizeof(ListNode));
            l3->val = c;
            l3->next = NULL;
            return l3;
        }
        l3->val = c%10;
        l3->next=NULL;
        c = c/10;
        ListNode *tp = l3;
        while(c!=0){
            ListNode *tmp = (ListNode*)malloc(sizeof(ListNode));
            tmp->val = c%10;
            tmp->next=NULL;
            tp->next = tmp;
            tp = tmp;
            c=c/10;
        }
        return l3;
    }
};