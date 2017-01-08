zer,fr,n = map(int,input().split())
sum = 0
for i in range(n-2):
    sum = fr*fr+zer
    zer = fr
    fr = sum
    sum = 0

print(fr)
