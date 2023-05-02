n = int(input())

divisor = 2

while n > 1 and divisor < n:
    if n % divisor == 0:
        print(divisor)
    divisor += 1
