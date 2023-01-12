name = input ("Name: ")
print(f"Hello, {name}")

a = int(input("Number: "))
if a < 0:
    print("number is negative")
elif a > 0:
    print("number is positive")
else:
    print("number is zero")

names = ["Kaycee", "Theo", "Charles"]
print(names[0])

names.append("Ekene")
names.sort()
print(names)
rates = range(7)
for rate in rates:
    print(rate)
s = set()
s.add(1)
s.add(3)
s.add(2)
s.add(4)
print(s)

class point():
    def __init__(self, input1, input2):
        self.x = input1
        self.y = input2

p = point(10, 9)
print(p.x)
print(p.y)


