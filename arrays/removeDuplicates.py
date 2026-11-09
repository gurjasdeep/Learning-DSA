class Solution:
    def removeDuplicates(self, nums: list[int]) -> int:
        doneNums: list[int] = []
        v = 0
        i = 0
        while i < len(nums):
            v = nums[i]
            if v not in doneNums:
                doneNums.append(v)
                i += 1
            else:
                nums.pop(i)
        return len(nums)
