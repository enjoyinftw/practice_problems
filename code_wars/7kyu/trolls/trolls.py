import re


def disemvowel(string_):

    return re.sub(r"[AEIOUaeiou]","", string_)
