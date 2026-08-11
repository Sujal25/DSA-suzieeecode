class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        slow=0
        fast=0
        n=len(nums)
        while True:
            slow=nums[slow]
            fast=nums[nums[fast]]
            if slow==fast:
                break
        slow1=0
        while slow1!=fast:
            slow1=nums[slow1]
            fast=nums[fast]
        return slow1