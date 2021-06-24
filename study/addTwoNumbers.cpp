


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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        int sizel1, sizel2;
        int maxSize;
        int carry = 0;
        ListNode *temp;
        ListNode *resp;

        temp = l1;
        sizel1 = sizeList(temp);
        temp = l2;
        sizel2 = sizeList(temp);
        maxSize = (sizel1 > sizel2)? sizel1 : sizel2;
        
        //ListNode *resp = nodeLenght(maxSize);

        for(int i = 0; i < maxSize; i++){
            
            ListNode lresult;

            if(l1->val + l2->val >= 10){
                lresult.val = l1->val + l2->val;
                carry = 1;
            }
            lresult.val = l1->val + l2->val + carry;
            resp->next = lresult.next;
        }
        
        return resp;
    }
    
    int sizeList(ListNode* ltemp){
        
        int size = 0;
        
        while(ltemp->next != nullptr)
        {
            ltemp->next = ltemp->next->next;
            size++;
        }
        
        return size;
    }
    
    ListNode *nodeLenght(int x){
        
        ListNode *respLenght;
        ListNode lLenght;

        respLenght->next = lLenght.next;
        
        for(int i = 0; i < x; i++){
            ListNode ltemp;
            lLenght.val = 0;
            ltemp.val = 0;
            lLenght.next = ltemp.next;
            ltemp.next = nullptr;
        }

        return respLenght;
    }
};

int main(){

    ListNode list1, list2, list3;
    ListNode listA, listB, listC;
    ListNode *ptr1 = list1.next, *ptr2 = listA.next;

    list1.val = 3;
    list2.val = 4;
    list3.val = 2;

    listA.val = 4;
    listB.val = 6;
    listC.val = 5;

    list1.next = list2.next;
    list2.next = list3.next;
    list3.next = nullptr;

    listA.next = listB.next;
    listB.next = listC.next;
    listC.next = nullptr;

    Solution s1;

    s1.addTwoNumbers(ptr1,ptr2);

    return 0;
}