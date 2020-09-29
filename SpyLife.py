import re
sample = "d89%l++5r19o7W *o=l645le9H"

# reverse input
rev_sample = sample[::-1]

# split input at spaces
samplelist = rev_sample.split(" ")

#regex pattern
pattern = r"[A-Z, a-z]"

# creating list of lists with only letters
newlist = []
for i in range(len(samplelist)):
    match = re.findall(pattern, samplelist[i])
    newlist.append(match)
    
for j in range(len(newlist)):
    for letter in newlist[j]:
        print(letter, end = "")
    print(" ", end = "")