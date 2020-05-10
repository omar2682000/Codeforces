 
n, l = list(map(int, input().split()))
arr , array = sorted(list(map(int, input().split()))) , []
for i in range(n - 1):
    array.append(abs(arr[i] - arr[i + 1]) / 2)
if 0 not in arr:
    array.append(arr[0])
if l not in arr:
    array.append(l - arr[n - 1])
print(float(max(array)))
