def trailing(num):
    sum = 0
    while(num!=0):
        sum += num//5
        num = num//5

    return sum

testcase = int(input('Enter a number: '))
print(trailing(testcase))
