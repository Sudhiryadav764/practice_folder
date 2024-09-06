
#check leap or not leap year program.

#leap year condition
# divisible by 4  and not divisible by 100
#divisible by 400

year = int(input("Enter the year :"))

if( year % 4 == 0 and year % 100 != 0) or (year % 400 == 0):

    print(f"{year} is a leap year.")

else:
    print(f"{year} is not a leap year.")