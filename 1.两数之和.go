/*
 * @lc app=leetcode.cn id=1 lang=golang
 *
 * [1] 两数之和
 */

// @lc code=start
func twoSum(nums []int, target int) []int {
	res := []int{}
	for k1, v1 := range nums {
		num := nums[k1:]
		for k2, v2 := range num {
			if k2 == 0 {
				continue
			}
			if v1+v2 == target {
				res = append(res, k1, k1+k2)
			}
		}
	}
	return res
}

// @lc code=end

// 暴力遍历 o(n2) 很蠢