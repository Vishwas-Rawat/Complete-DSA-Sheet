// Method 1
class Solution:
    def reverseWord(self, s: str) -> str:
        e = ""
        for i in range(len(s) - 1, -1, -1):
            e += s[i]
        return e


// Method 2
class Solution:
    def reverseWord(self, s: str) -> str:
        str_list = list(s)
        i, j = 0, len(str_list) - 1
        while i < j:
            temp = str_list[i]
            str_list[i] = str_list[j]
            str_list[j] = temp
            i += 1
            j -= 1
        return ''.join(str_list)
