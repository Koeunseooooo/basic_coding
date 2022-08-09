# Jungbo Olympiad
# s=list(input())

# for i in s[:-1]:
#     print(i,end=",")
# print(s[-1])


# Elbow
# Elegant
# Elephant

# a=input()
# b=input()
# c=input()
# a=["Elegant","Elbow","Elephant"]
# b=['Elbow', 'Elegant', 'Elephant']
# d=sorted(a)
# print(d==b)


# I am DELIMITER very DELIMITER smart person DELIMITER !!
# DELIMITER

s=input()
d=input()
a=list(s.split(d))
for i in a:
    print(i.strip())