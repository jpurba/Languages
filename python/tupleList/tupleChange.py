t = ('56', '12', '987', '47', '1')
print("original Tuple: ",t)
print("t(3) = ",t[3])
lst = list(t)
print(lst[-1])
lst.append('78')
print(lst)
t = tuple(lst)
print(t)

