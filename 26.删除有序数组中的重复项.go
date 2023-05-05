/*
 * @lc app=leetcode.cn id=26 lang=golang
 *
 * [26] 删除有序数组中的重复项
 */

// @lc code=start
func removeDuplicates(nums []int) int {
	m := make(map[int]int)
	for _, v := range nums {
		m[v]++
	}
	var count int
	for k, _ := range m {
		nums = append(nums[:count], k)
		count++
	}
	sort.Ints(nums)
	return count
}

// @lc code=end

