#Problem - https://leetcode.com/problems/reverse-integer/

class Solution:
    def reverse(self, x: int) -> int:
        output = 0

        if (x >= 0):
            while (x != 0):
                output = (output * 10) + x % 10
                x = x // 10
        else:
            x = x * -1
            while (x != 0):
                output = (output * 10) + x % 10
                x = x // 10
            output = output * -1

        if (output < 2 ** 31 - 1 and output > -(2 ** 31)):
            return output
        else:
            return 0
