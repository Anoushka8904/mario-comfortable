height = input("Enter height of pyramid (integer from 0-23):")

#loop to ensure accepted user input is a non-negative integer from 0-23
while height.isnumeric()==False or int(height) < 0 or int(height) > 23:
    height = input("Enter height of pyramid (integer from 0-23):")

#loop printing a combination of spaces and hashes per row (or iteration)
for i in range(1, int(height)+1):
    print((int(height)-i)*" ",i*"#","  ",i*"#")
