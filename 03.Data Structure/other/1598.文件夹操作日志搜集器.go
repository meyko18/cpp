/*
 * @lc app=leetcode.cn id=1598 lang=golang
 *
 * [1598] 文件夹操作日志搜集器
 */

// @lc code=start
func minOperations(logs []string) int {
	var depth int
	for _, log := range logs {
		switch log {
		case "../":
			if depth > 0 {
				depth--
			}
		case "./":
		default:
			depth++
		}
	}
	return depth
}
// @lc code=end

