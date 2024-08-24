principal = float(input("Enter the principal Value :"))
rate = float(input("Enter the rate :"))
time = float(input("Enter the time :"))
n = float(input("Enter number of compounding periods per year :"))

amount = principal*(1+rate/n)**(n*time)

ci = amount - principal

print(ci)