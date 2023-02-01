1. Check the concatenations of str1 + str2 = str2 + str1
- Since both strings contains multiples of the identical segment base, their concatenation must be consistent, regardless of the order (str1 + str2 = str2 + str1).
2. Find the GCD, to find the length that devides both strings; if both strings have `base` * k, then `str1 / gcd = str2 / gcd = base`.
3. Return the string starting from 0 to gcd.
​
[Calculating GCD](https://cp-algorithms.com/algebra/euclid-algorithm.html#practice-problems)