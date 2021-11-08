#write a python for matrix multiplication program

a = [[1,2,3],
[4,5,6],
[7,8,9]]

b = [[9,8,7],
[6,5,4],
[3,2,1]]

answer = [[sum(a*b for a, b in zip(a_row, b_column)) for b_column in zip(*b)] for a_row in a]

for i in answer:
    print(i)