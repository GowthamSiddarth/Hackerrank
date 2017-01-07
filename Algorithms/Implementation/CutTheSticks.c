n, i, arr = int(input().strip()), 0, list(sorted(map(int, input().strip().split())))
while i < n:
    j = i
    while j < n and arr[i] == arr[j]:        
        j += 1
    print(n - i)
    i = j
