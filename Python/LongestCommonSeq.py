 strings = ['geeksforgeeks', 
      'geeks', 
      'geekrgeeks', ]

min_len = min([len(x) for x in strings])
base = strings[0]
match = ""
for i in range(min_len):
    for text in range(1, len(strings)):
        if base[i] != strings[text][i]:
            print(match)
            
    match += base[i]
