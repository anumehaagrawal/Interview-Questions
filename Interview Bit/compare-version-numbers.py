class Solution:
    # @param A : string
    # @param B : string
    # @return an integer
    def compareVersion(self, A, B):
        solA=A.split(".")
        solB=B.split(".")
        a = len(solA)
        b = len(solB)
        i=0
        j=0
        while i<a and j<b:
            if int(solA[i])>int(solB[j]):
                return 1
            if int(solA[i])<int(solB[j]):
                return -1
            else:
                i=i+1
                j=j+1
        if(i<a and solA[i]!=0):
            return 1
        elif(j<b and solB[j]!=0):
            return -1
        else:
            return 0
