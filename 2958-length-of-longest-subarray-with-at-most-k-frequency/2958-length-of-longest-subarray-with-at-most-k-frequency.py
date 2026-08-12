class Solution:
    def maxSubarrayLength(self, nums: List[int], k: int) -> int:
        mp={}
        l,r=0,0
        n=len(nums)
        ans=0
        while r<n:
            mp[nums[r]]=1+mp.get(nums[r],0)
            while mp[nums[r]]>k:
                mp[nums[l]]-=1
                if mp[nums[l]]==0:
                    del mp[nums[l]]
                l+=1
            ans=max(ans,r-l+1)
            r+=1
        return ans
