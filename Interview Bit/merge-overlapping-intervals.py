# Definition for an interval.
# class Interval:
#     def __init__(self, s=0, e=0):
#         self.start = s
#         self.end = e

class Solution:
    # @param intervals, a list of Intervals
    # @return a list of Interval
    def merge(self, intervals):
        intervals.sort(key=lambda x: x.start)
        
        result =[]
        count = len(intervals)
        num =1 
        result.append(intervals[0])
        while(num<count):
            val = result.pop()
            if intervals[num].start <= val.end:
                result.append(Interval(min(val.start,intervals[num].start),max(intervals[num].end,val.end)))
            else:
                result.append(val)
                result.append(intervals[num])
            num=num+1
        
        return result
                
                
            