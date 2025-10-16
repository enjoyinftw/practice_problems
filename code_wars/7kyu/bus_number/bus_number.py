def number(bus_stops):
    return sum([busStop[0]-busStop[1] for busStop in bus_stops])