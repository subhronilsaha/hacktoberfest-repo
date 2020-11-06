# Link to the Problem : https://leetcode.com/problems/median-of-two-sorted-arrays/
#Leetcode Problem No : 4

class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        combine = nums1 + nums2
        combine = sorted(combine)
        mid = len(combine) // 2

        if (len(combine) % 2 == 0):
            return (combine[mid - 1] + combine[mid]) / 2
        else:
            return combine[mid]