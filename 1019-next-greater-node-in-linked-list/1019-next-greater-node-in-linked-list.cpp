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
    vector<int> nextLargerNodes(ListNode* head) {
        
        vector<int> new1;
        vector<int> ans;
        ListNode *temp = head;
        
        while(temp!=NULL)
        {   
            new1.push_back(temp->val);
            temp = temp -> next;
        }
        
        int n = new1.size();
        
        for(int i=0;i<n;i++)
        {
            bool found = false;
            for (int j = i + 1; j < n; j++) {
                if (new1[i] < new1[j]) {
                    ans.push_back(new1[j]);
                    found = true;
                    break;
                }
            }
            if (!found) {
                ans.push_back(0);
            }
        }
        
        return ans;
        
        
        
    }
};