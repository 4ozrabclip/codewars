#You get an array of numbers, return the sum of all of the positives ones.

#Example [1,-4,7,12] => 1 + 7 + 12 = 20

#Note: if there is nothing to sum, the sum is default to 0.

def positive_sum(arr):
    result = 0
    for i in range(len(arr)):
        if arr[i] > 0:
            result += arr[i]
    return result
