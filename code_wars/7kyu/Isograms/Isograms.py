def is_isogram(string:str) -> bool:
    
    return len(set(string.lower())) == len(list(string.lower())) 
