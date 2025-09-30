def digitize(n: int) -> list[int]:
    if n == 0:
        return [0]
    result = []
    while n > 0:
        result.append(n % 10)
        print(f"rest:{n%10}")
        print(f"floor div: {n//10}")
        n = n // 10
    return result


print(digitize(1234))
