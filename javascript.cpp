def can_make_identical(t, test_cases):
    results = []
    for case in test_cases:
        n, a, b = case
        if sorted(a) == sorted(b):
            results.append("YES")
        else:
            results.append("NO")
    return results

# Input reading
import sys
input = sys.stdin.read
data = input().split()

t = int(data[0])
index = 1
test_cases = []
for _ in range(t):
    n = int(data[index])
    index += 1
    a = list(map(int, data[index:index + n]))
    index += n
    b = list(map(int, data[index:index + n]))
    index += n
    test_cases.append((n, a, b))

# Processing the test cases
results = can_make_identical(t, test_cases)

# Output results
for result in results:
    print(result)
