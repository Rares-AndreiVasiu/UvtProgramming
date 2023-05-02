a = int(input())

sum_of_digits = 0

while a > 0:    
    sum_of_digits += a % 10
    a //= 10
else:
    print(sum_of_digits)
