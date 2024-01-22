#Abbreviate a Two Word Name

def abbrev_name(name):
    abbreviation = name[0].upper() + "."
    
    for i in range(len(name)):
        if name[i - 1] == " ":
            abbreviation += name[i].upper()
    
    return abbreviation