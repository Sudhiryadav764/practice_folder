def rev_trangle(n):
    for i in range(n, 0, -1): # range(start, stop, step)
        print(" " *(n-i) + "*" * i)
n = int(input("Enter length of Pattern :"))
rev_trangle(n)