
#include <iostream>
#include <vector>
#include <bits/stdc++.h>


 // Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* mergeTwoList(ListNode* l1, ListNode* l2) {
        ListNode *mergeAns;
        ListNode *headN;
        ListNode *temp;
        mergeAns = new ListNode;
        mergeAns->next = nullptr;
        headN = new ListNode;

        std::vector<int> v1;

        while(l1 != nullptr){
            v1.push_back(l1->val);
            l1 = l1->next;
        }

        while(l2 != nullptr){
            v1.push_back(l2->val);
            l2 = l2->next;

        }

        std::sort(v1.begin(), v1.end());

        for(auto x : v1)
        {
            std::cout << x << std::endl;
        }

        for(int i = v1.size()-1; i >= 0; i--){
            int data = v1[i];
            append(&mergeAns->next, data);
        }

        return mergeAns;
    }

    void append(ListNode** head_ref, int new_data){ 
   
    // 1. allocate node
    ListNode* new_node = new ListNode();
   
    // Used in step 5
    ListNode *mergeAns = *head_ref;
   
    // 2. Put in the data
    new_node->val = new_data; 
   
    // 3. This new node is going to be 
    // the last node, so make next of 
    // it as NULL
    new_node->next = NULL; 
   
    // 4. If the Linked List is empty,
    // then make the new node as head
    if (*head_ref == NULL) 
    { 
        *head_ref = new_node; 
        return; 
    } 
   
    // 5. Else traverse till the last node
    while (mergeAns->next != NULL) 
        mergeAns = mergeAns->next; 
   
    // 6. Change the next of last node
    mergeAns->next = new_node; 
    return; 
} 

};

int main(){

    ListNode *list1 = NULL, *list2 = NULL, *list3 = NULL;
    ListNode *listA, *listB, *listC;

    list1 = new ListNode;
    list2 = new ListNode;
    list3 = new ListNode;

    listA = new ListNode;
    listB = new ListNode;
    listC = new ListNode;

    ListNode *ptr1 = list3, *ptr2 = listC;

    list3->val = 2;
    list3->next = list2;
    list2->val = 4;
    list2->next = list1;
    list1->val = 1;
    list1->next = nullptr;

    listC->val = 1;
    listC->next = listB;
    listB->val = 3;
    listB->next = listA;
    listA->val = 4;
    listA->next = nullptr;
    
    Solution s1;

    s1.mergeTwoList(ptr1,ptr2);

    return 0;
}