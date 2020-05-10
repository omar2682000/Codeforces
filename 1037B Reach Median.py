n , s = map(int,input().strip().split())
arr = list(map(int,input().strip().split()))
c = 0
arr.sort()
c += abs(s - arr[len(arr)//2])
arr[len(arr)//2] += (s - arr[len(arr)//2])
for i in range((len(arr)//2) + 1 , len(arr)):
    if arr[i] - s < 0:
        c += abs(arr[i] - s)

for x in range(len(arr)//2):
    if arr[x] - s > 0:
        c += abs(arr[x] - s)
        arr[x]-= (abs(arr[x] - s))
print(c)
