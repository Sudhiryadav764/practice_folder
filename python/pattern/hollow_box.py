def rev_trangle(n):
    for i in range(n):
        if i == 0 or i == n-1:
         print("* " * n)
        else:
           print("* " + "  " * (n-2) + "* ")
n = int(input("Enter length of Pattern :"))
rev_trangle(n)