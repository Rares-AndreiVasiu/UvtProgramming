# body mass index of a man

# mass in kg
mass = float(input())
# height in meters
height = float(input())

BMI = mass / (height ** 2)

if BMI < 18.5:
    print("High risk: the weight is too low")
elif 18.5 <= BMI < 25:
    print("Minimum/Low risk")
elif 25 <= BMi < 30:
    print("Low/Medium risk")
elif 30 <= BMI < 35:
    print("Medium/High risk")
elif BMI >= 35:
    print("High risk: the weight is too high")
