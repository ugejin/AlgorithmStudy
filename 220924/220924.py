import math
def solution(n):
    answer = 0
    a=math.sqrt(n)
    if a != int(a):
        return -1
    return math.pow(a+1,2)