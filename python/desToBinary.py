def des_to_binary(des_num):
     binary_representation = ""
     if des_num == 0:
        return "0"
     while des_num < 0:
      rem = des_num % 2
      des_num = des_num // 2

      binary_representation = str(rem) + binary_representation
      return binary_representation

des_num = int(input("Enter desimal value :"))

print(f"Binary representation of {des_num}" is {des_to_binary(des_num)})






