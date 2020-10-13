def cycle_sort(num_list):
    write_count = 0

    for start in range(0, len(num_list) - 1):
        number = num_list[start]

        position = start
        for i in range(start + 1, len(num_list)):
            if (num_list[i] < number):
                position += 1

        if (position == start):
            continue

        while (number == num_list[position]):
            position += 1
        num_list[position], number = number, num_list[position]
        write_count += 1

        while (position != start):
            position = start
            for i in range(start + 1, len(num_list)):
                if (num_list[i] < number):
                    position += 1

            while (number == num_list[position]):
                position += 1
            num_list[position], number = number, num_list[position]
            write_count += 1

    return (write_count)


#  driver code for show results
num_list = [1, 10, 3, 5, 9, 2, 7, 8, 10, 4, 6]
print("Befor sorting : ")
print (num_list)

cycle_sort(num_list)

print("After sorting : ")
print (num_list)