import math
def findLargestDivisor(n):
    for i in range(2, int(math.sqrt(n)) + 1):
        while (n % (i * i) == 0):
            n = n // i
    return n
n = int(input())
print(findLargestDivisor(n))
