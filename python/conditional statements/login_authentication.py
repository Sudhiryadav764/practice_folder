# login authenticatio using conditional statement
# assume you have allready username and password 

user_name = "krishna"
password = 2525

u_name = (input("Enter your user name :"))
passw = int(input("Enter your password :"))

if (u_name == user_name and passw == password):
    
    print("Welcome!, you are loged in.")


elif (u_name == user_name and passw != password):

    print("Plese try again, User name is correct but password is incorrect")

else:
    print("user name is incorrect")