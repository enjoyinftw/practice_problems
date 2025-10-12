def are_you_playing_banjo(name):
    return (
        f"{name} plays banjo"
        if name[0] in ["r", "R"]
        else f"{name} does not play banjo"
    )
