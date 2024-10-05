class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        res = []
        check = {}
        for i in range(len(nums)):
            if nums[i] in check.keys():
                res.append(check[nums[i]])
                res.append(i)
                return res
            check[target - nums[i]] = i
        return res