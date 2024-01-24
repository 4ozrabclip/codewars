def divisors(integer):
    divs = []
    for i in range(1, integer + 1):
        if (integer % i == 0) and i != 1 and i != integer:
            divs.append(i)
    if len(divs) == 0:
        return f"{integer} is prime"
    else:
        return divs
