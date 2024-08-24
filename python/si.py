# Input from the user
principal = float(input("Enter Principal Amount: "))
rate = float(input("Enter Rate: "))
time = float(input("Enter Time: "))

# Calculate simple interest
si = (principal * rate * time) / 100

# Print the result
print(si)
