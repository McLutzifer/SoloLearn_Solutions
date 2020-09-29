
solution = 15
e = "(2+100) (5*3) (14+1)"
e = e.replace('(','')
e = e.replace(')','')

equ = e.split(" ")

length = len(equ) #=3

correct = []

for i in range(length):
    if '+' in equ[i]:
        x = int(equ[i].split('+')[0])
        y = int(equ[i].split('+')[1])
        z = (x + y)
        if z == solution:
            correct.append(i)
    if '*' in equ[i]:
        x = int(equ[i].split('*')[0])
        y = int(equ[i].split('*')[1])
        z = (x * y)
        if z == solution:
            correct.append(i)
    if '-' in equ[i]:
        x = int(equ[i].split('-')[0])
        y = int(equ[i].split('-')[1])
        z = (x - y)
        if z == solution:
            correct.append(i)
    if '/' in equ[i]:
        x = int(equ[i].split('/')[0])
        y = int(equ[i].split('/')[1])
        z = (x / y)
        if z == solution:
            correct.append(i)
            
if len(correct) != 0:
    sol = min(correct)
    print("index " + str(sol))
else:
    print("none")

"""

Find which math expression matches the answer that you are given, if you have an integer answer, and a list of math expressions.

Task: 
Test each math expression to find the first one that matches the answer that you are given.

Input Format: 
Two inputs: an integer and a space separated string of math expressions. The following operations need to be supported: addition +, subtraction -, multiplication *, division /. 
An expression can include multiple operations.

Output Format: 
A string that tells the index of the first math expression that matches. If there are no matches, output 'none'.

Sample Input: 
15
(2+100) (5*3) (14+1)

Sample Output: 
index 1
"""
