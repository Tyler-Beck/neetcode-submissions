from typing import List


def find_max_in_each_list(nested_arr: List[List[int]]) -> List[int]:
    final_list = []
    max_num = 0
    for sublist in nested_arr:
        for i in range(len(sublist)):
            if sublist[i] > max_num:
                max_num = sublist[i]
        final_list.append(max_num)
    return final_list     


# do not modify below this line
print(find_max_in_each_list([[1, 2], [3, 4, 2]]))
print(find_max_in_each_list([[1, 2, 3], [4, 5, 6], [7, 8, 9]]))
print(find_max_in_each_list([[5, 6, 2, 8], [9], [9, 10], [11, 10, 11]]))
