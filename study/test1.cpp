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
        
        ListNode *resp;
        bool flagl1 = false;
        bool flagl2 = false;
        int valueList1 = 0;
        int valueList2 = 0;
        int value = 0;
        int carry = 0;

        while((l1 != nullptr) || (l2 != nullptr)){

            if(l1->next != nullptr){
                valueList1 = l1->val;
            }else if(l1->next == nullptr && !flagl1)
            {
                valueList1 = l1->val;
                flagl1 = true;
            }

            if(l2->next != nullptr){
                valueList2 = l2->val;
            }else if(l2->next == nullptr && !flagl2)
            {
                valueList2 = l2->val;
                flagl2 = true;
            }

            if(!flagl1 || !flagl2){

                if(valueList1 + valueList2 >= 10)
                {
                    carry = 1;
                }
                ListNode *temp;

                temp->val = valueList1 + valueList2 + carry;
                carry = 0;

                resp->next = temp->next;
            }

        }

        return resp;
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