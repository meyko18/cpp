/*
 * @lc app=leetcode.cn id=1507 lang=golang
 *
 * [1507] 转变日期格式
 */

// @lc code=start
func reformatDate(date string) string {
	// 1. split date string
	// 2. convert date string to int
	// 3. convert date int to string
	// 4. join date string
	// 5. return date string
	months := map[string]string{
		"Jan": "01",
		"Feb": "02",
		"Mar": "03",
		"Apr": "04",
		"May": "05",
		"Jun": "06",
		"Jul": "07",
		"Aug": "08",
		"Sep": "09",
		"Oct": "10",
		"Nov": "11",
		"Dec": "12",
	}
	dateSlice := strings.Split(date, " ")
	year := dateSlice[2]
	month := months[dateSlice[1]]
	day := dateSlice[0][0:1]
	if len(dateSlice[0]) == 3 {
		day = "0" + day
	}else {
		day = dateSlice[0][0:2]
	}
	
	return year + "-" + month + "-" + day
}
// @lc code=end

