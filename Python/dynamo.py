t = int(input())
for i in range(t):
    n = int(input())
    a = int(input())
    s = 10**n + 10**n + a
    print(s)
    b = int(input())
    c = 10**n - b
    print(c)
    d = int(input())
    e = 10**n - d
    print(e)
    grade = int(input())
    if grade == -1:
        break  