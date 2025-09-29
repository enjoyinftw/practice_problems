def count_sheeps(sheeps):
    count: int = 0
    for sheep in sheeps:
        if sheep == True:
            count+=1
    return count