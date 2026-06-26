
#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL) return head;
        
        int cnt = nodeCount(head);

        k%=cnt;
        if(k == 0) return head;

       
        ListNode* curr = head;
        for(int i=0;i<((cnt - k) - 1);i++){
            curr = curr->next;
        }

        ListNode* rotateNodes = curr->next;
        curr->next = NULL;
        
        ListNode* curr2 = rotateNodes;
        while(curr2->next){
            curr2 = curr2->next;
        }

        curr2->next = head;

        return rotateNodes;

        
    }

    int nodeCount(ListNode* head){
        ListNode* curr = head;
        int cnt = 0;
        while(curr){
            cnt++;
            curr = curr->next;
        }

        return cnt;
    }
};
