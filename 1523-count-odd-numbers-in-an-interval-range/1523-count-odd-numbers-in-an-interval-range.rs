impl Solution {
    pub fn count_odds(low: i32, high: i32) -> i32 {
        let mut l = low;
        let n: i32 = high - low + 1;
        let lp: i32 = 1 - ((low & 1) << 1);
        if lp == 1 {
            l += 1;
        }
        
        return if l > high { 0 } else {(high - l) / 2 + 1};
    }
}