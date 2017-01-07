def factorial(num):
    def loop(num, acc):
        if 0 == num or 1 == num:            
            return acc
        else:            
            return loop(num - 1, num * acc)
        
    return loop(num, 1)


n = int(input().strip())
print(factorial(n))
