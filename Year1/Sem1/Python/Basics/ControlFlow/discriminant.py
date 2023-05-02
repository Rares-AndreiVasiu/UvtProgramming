import math

a = float(input())
b = float(input())
c = float(input())

discriminant = b * b - 4 * a * c

if discriminant > 0:
    x1 = (-b - math.sqrt(discriminant)) / (2 * a)
    x2 = (-b + math.sqrt(discriminant)) / (2 * a)
    print(x1)
    print(x2)
