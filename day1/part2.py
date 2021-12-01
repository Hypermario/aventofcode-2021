f = open("test.txt", "r")
lines = f.readlines()
a = 0
b = 0
c = 0
d = 0
c1 = 0
c2 = 0
c3 = 0
c4 = 0
count = 0

for i, x in enumerate(lines):
    if (c1 == 3 and c2 == 3):
        if (b > a):
            print("+")
            count += 1
        else:
            print("-")
        a = b
        b = c
        c = d
        d = 0
        c1 = c2
        c2 = c3
        c3 = c4
        c4 = 0

    if (c1 < 3):
        a += int(x)
        c1 += 1
    if (c2 < 3):
        b += int(x)
        c2 += 1
    if (c3 < 3):
        c += int(x)
        c3 += 1
    if (c4 < 3):
        d += int(x)
        c4 += 1

print(count)