#Link to Problem : https://leetcode.com/problems/add-two-numbers/
#Leetcode Problem No : 2

# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        lst1 = l1
        lst2 = l2
        num1 = 0
        num2 = 0

        i = 0
        while lst1:
            num1 += (lst1.val) * (10 ** i)
            lst1 = lst1.next
            i += 1

        i = 0
        while lst2:
            num1 += (lst2.val) * (10 ** i)
            lst2 = lst2.next
            i += 1

        result = str(num1 + num2)

        l3 = output = ListNode(int(result[-1]))

        for j in range(len(result) - 2, -1, -1):
            output.next = ListNode(int(result[j]))
            output = output.next

        return l3
