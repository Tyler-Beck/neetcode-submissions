from typing import List

def read_integers() -> List[int]:
    my_ints = input()
    new_list = [int(x) for x in my_ints.split(",")]

    return new_list

# do not modify the code below
print(read_integers())
print(read_integers())
print(read_integers())