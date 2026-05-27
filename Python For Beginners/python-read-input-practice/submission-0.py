def add_two_numbers() -> int:
    final_sum = 0
    the_input = input()
    new_list = [int(x) for x in the_input.split(",")]
    for i in range(len(new_list)):
        final_sum += new_list[i]
    return final_sum



# do not modify below this line
print(add_two_numbers())
print(add_two_numbers())
print(add_two_numbers())
print(add_two_numbers())
