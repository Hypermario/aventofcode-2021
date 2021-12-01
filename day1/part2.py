f = open("input.txt", "r")
lines = f.readlines()
count = 0
nums = []

for i, x in enumerate(lines):
    nums.append(int(x))

for i, x in enumerate(nums):
    if (sum(nums[i:i+3]) > sum(nums[i-1:i+2]) and i != 0):
        count += 1

print(count)