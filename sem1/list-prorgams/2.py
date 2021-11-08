#write a python program to find the min and max from a list

lis = [1,23,5,6,4,7,4,84,3]

for i in range(len(lis)-1):
    for j in range(i):
        if lis[j] < lis [j+1]:
            temp = lis[j]
            lis[j] = lis[j+1]
            lis[j+1] = temp

print("Minimum: ", lis[-1])
print("Maximum: ", lis[0])