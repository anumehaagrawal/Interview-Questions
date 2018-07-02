class Solution:
    # @param A : string
    # @return string
    def reverseWords(self, A):
        words = A.split(" ")
        arr =[]
        for i in reversed(words):
            arr.append(i)
        return " ".join(arr)
