"""write a python program to ding the second
highest number from a set of numbers using list"""

lis = eval(input("enter the list: "))

for i in range(len(lis)-1, 0, -1):
    for j in range(i):
        if lis[j] > lis [j+1]:
            temp = lis[j]
            lis[j] = lis[j+1]
            lis[j+1] = temp

print(lis[-2])