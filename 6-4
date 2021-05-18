number = int(input())
array = list(map(int, input().split()))


def find_inversions(array):
    if len(array) == 1:
        return (array, 0)
    result_array = []
    md = len(array) // 2
    arrayR, resultR = find_inversions(array[md:])
    arrayL, resultL = find_inversions(array[:md])
    result = resultR + resultL
    i = 0
    j = 0
    for _ in range(len(array)):
        if j < len(arrayR) and i < len(arrayL) and arrayR[j] < arrayL[i]:
            result_array.append(arrayR[j])
            j += 1
            result += md - i

        elif j < len(arrayR) and i < len(arrayL) and arrayR[j] >= arrayL[i]:
            result_array.append(arrayL[i])
            i += 1

        elif i < len(arrayL):
            result_array.append(arrayL[i])
            i += 1
            
        elif j < len(arrayR):
            result_array.append(arrayR[j])
            j += 1
            
    return (result_array, result)

new_array, number = find_inversions(array)
print(number)
