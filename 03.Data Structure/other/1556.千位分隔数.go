/*
 * @lc app=leetcode.cn id=1556 lang=golang
 *
 * [1556] 千位分隔数
 */

// @lc code=start
func thousandSeparator(n int) string {
	// 1. convert int to string
	// 2. split string
	// 3. reverse string
	// 4. join string
	// 5. return string
	if n == 0 {
		return "0"
	}
	var res string
	var count int
	for n > 0 {
		if count == 3 {
			res += "."
			count = 0
		}
		// strconv.Itoa() converts int to string
		res += strconv.Itoa(n % 10)
		n /= 10
		count++
	}
	return reverse(res)
}


func reverse(s string) string {
	r := []rune(s)
	for i, j := 0, len(r)-1; i < j; i, j = i+1, j-1 {
		r[i], r[j] = r[j], r[i]
	}
	return string(r)
}

// @lc code=end

