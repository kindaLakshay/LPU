# return a sentence with the words reversed using recursion
# string = input()
string = "Hello how are you"


def master_yoda(str1):
    # initialising variables
    lst = []
    word = []
    reversed_list = []
    length_of_list = len(lst)

    # making a list from the string: str1
    for i in str1:
        lst += i

    # index of white space
    index_of_whitespace = lst.index(" ")

    # iterating list:lst from beginning to index_white_space and storing it into a new list word
    for i in lst[0:index_of_whitespace]:
        word += i
    del lst[0:index_of_whitespace+1]
    # storing list:word into var:complete_str as type("str")
    complete_word = "".join(word)

    # appending string:complete_word to list:reversed_list
    reversed_list.append(complete_word)

    # printing string:complete_word and list:lst
    print("\n\ncomplete word:   ", complete_word)
    print("\nreversed list: ", reversed_list)
    print("\nlist: ", lst, "\n\n")
    complete_word = ""


master_yoda(string)
