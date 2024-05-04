import math

def gcd(x, y):
    if y == 0:
        return x
    return gcd(y, x % y)

def lcm(x, y):
    return x * y // gcd(x, y)

def find_min_sum(x, y , k):
    for _ in range(k):
        if x > y:
            x = gcd(x, y)
            y = lcm(x, y)
        else:
            y = gcd(x, y)
            x = lcm(x, y)
    return x + y

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        x, y, k = map(int, input().split())
        result = find_min_sum(x, y, k)
        print(result)