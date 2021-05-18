from math import ceil

def find_number(value):
    first = 1
    second = int(massive[0])
    while first <= second:
        index = ceil((second + first) / 2)
        if value == massive[index]:
            return index
        elif int(value) < int(massive[index]):
            second = index - 1
        else:
            first = index + 1
    return -1

if __name__ == "__main__":
    massive = input().split()
    for number in input().split()[1:]:
        print(find_number(number), end=' ')
