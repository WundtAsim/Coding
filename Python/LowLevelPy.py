# This is a py code about some questions which essy to build in order to increase me

# 1.realize the exchange of two variables
# a = input('input a variable a')
# b = input('input a variable b')
# c = a; a = b; b = c
# print('exchange of two variable:a = {0},b = {1}'.format(a,b))

# 2. Celsius to Fahrenheit
# a = input('plz input the temputure:(with C or F in the end)')
# a = a.lower()
# b = eval(a[0:-1])
#
# if a[-1] == 'c':
#     c = b*1.8+32
#     print('the temputure after translate is {:.2f}F'.format(c))
# elif a[-1] == 'f':
#     c = (b-32)/1.8
#     print('the temputure after translate is {:.2f}C'.format(c))
# else:
#     print('u r doing wrong')

# 3.print the sum of digits of a number
# a = input('plz input a number:')
# if str.isdigit(a):
#     b = 0
#     for i in a:
#         b += eval(i)
#     print('the sum of digits is: {0}'.format(b))
# elif float(a):
#     b = a.split('.')
#     d = 0
#     for i in b[0]:
#         d += eval(i)
#
#     b = a.replace('.', '')
#     c = 0
#     for i in b:
#         c += eval(i)
#     print('ur input is a float, the sum of digits is:{0}, the sum of integers is :{1}'.format(c, d))
#
# else:
#     print('wrong!')

# 4.determine whether a number is prime
# a = input('plz input a number(integer):')
# a = int(eval(a))
# if a == 0 or a ==1 or a == 2:
#     print('ur input is prime.')
# else:
#     for i in range(2, a):
#         if a % i == 0:
#             print('ur input is not prime.')
#             break
#     else:
#         print('ur input is prime.')


# 5.generate a random number
# import random as rd
# a = input('plz input a integer which u r thinking:')
# a = eval(a)
# rd.seed(a)
# b = rd.randint(a-100, a+100)
# rd.seed(a)
# c = rd.randrange(a-100,a+100)
# print('{0},{1}'.format(b,c))

# 6.delate the same objects in a list
# a = list((22, 22, 33, 33, 222, 222, 222, 38, 33, 33, 33))
# a.sort()
# b = []
# for i in a:
#     if i not in b:
#         b.append(i)
#     else:
#         pass
# print(b)

# b = set(a)
# c = list(b)
# print(type(c), c)

# 7.palindrome detection
# a = input('plz input a sequence to detect is whether a palindrome:')
# b = list(a)
# c = b.copy()
# b.reverse()
# if b == c:
#     print("it's a palindrome")
# else:
#     print("it's not a palindrome")

# 8.calculate the greatest common divisor
# a, b = input('plz input two ingeters which separated by space :').split()
# a = eval(a); b = eval(b)
# if a in range(1,3) or b in range(1, 3):
#     print('their greatest common divisor is:1')
# elif a == 0 or b == 0:
#     print('they dont have greatest common divisor')
# else:
#     c = []
#     d = []
#     for i in range(1,a):
#         if a%i == 0:
#             c.append(i)
#     for i in range(1,b):
#         if b%i == 0:
#             d.append(i)
#     c.sort(reverse=True); d.sort(reverse=True)
#     e = []
#     for i in c:
#         if i in d:
#             e.append(i)
# print(max(e))

# 9. combine two ordered arrays
a = list((2, 0, 1, 8)); b = list((1, 9, 9, 6))
c = a+b
c.sort()
print(c)
d = [' ']*(len(a)+len(b))
for i in range(len(a)):
    d[i*2] = a[i]
    d[i*2+1] = b[i]
print(d)



