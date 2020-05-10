n = int(input())
if n%2==1:
    print("-1")
else:
    s=""
    for i in range(1,n//2+1):
        s += str(i*2) + " " + str(i*2-1) + " "
    print(s)
