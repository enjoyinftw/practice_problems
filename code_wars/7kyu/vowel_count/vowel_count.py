import re


def get_count(sentence: str) -> int:
    return len(re.findall(r"[AEIOUaeiou]", sentence))
