# Admission Eligibility: A university has the following eligibility criteria for admission:

# Marks in Mathematics >= 65
# Marks in Physics >= 55
# Marks in Chemistry >= 50
# Total marks in all three subjects >= 180 OR Total marks
# Mathematics and Physics >= 140

# Write a program that takes marks in three subjects prints whether the student is eligible for admission


math = int(input("Enter mathematics marks :"))
phy = int(input("Enter physics marks :"))
che = int(input("Enter chemistry marks :"))

total_marks = math + phy + che
math_phy = math+ phy

print("Total three sub marks =", total_marks)

print("Total math and phy marks =", math_phy)

if (math >= 65 and phy >= 55 and che >= 50) :
    if (total_marks >= 180 or math_phy >= 140):
     print("eligible for admission.")

else:
    print("Not eligible for admission.")