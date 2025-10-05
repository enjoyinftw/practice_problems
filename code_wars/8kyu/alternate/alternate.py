def to_alternating_case(string):
    result = ""
    for item in list(string):
        if item.isalpha():
            if item.islower():
                result += item.upper()
            elif item.isupper():
                result += item.lower()
        else:
            result += item

    return result


print("start\n")
print(to_alternating_case("aBc1"))
print("finish\n")
