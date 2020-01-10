"""
File: caesarCipher.py
input: string and distance value
output: cipher
"""
plainText = input("Enter a one-word, lowercase message: ")
distance = int(input("Enter the distance value: "))
code = ""
for ch in plainText:
    ordvalue = ord(ch)
    cipherValue = ordvalue + distance
    code += chr(cipherValue)
print(code)
