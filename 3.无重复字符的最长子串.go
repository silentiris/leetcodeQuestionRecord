/*
 * @lc app=leetcode.cn id=3 lang=golang
 *
 * [3] 无重复字符的最长子串
 */

// @lc code=start
func lengthOfLongestSubstring(s string) int {
	resSlice := make([]int, 0)
	for i := 0; i < len(s)-1; i++ {
		m := make(map[rune]int)
		m[rune(s[i])] = 1
		resSlice = append(resSlice, 1)
		j := i + 1
		for m[rune(s[j])] == 0 {
			m[rune(s[j])] = 1
			resSlice[i] += 1
			if j == len(s)-1 {
				break
			}
			j += 1
		}
	}
	res := 1
	for _, value := range resSlice {
		if value > res {
			res = value
		}
	}
	if s == "" {
		res = 0
	}
	return res
}

// @lc code=end

