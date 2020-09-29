# convert time from 12 hour clock to 24 hour clock
#input : a String including time, than a space and the indicator for AM or PM
#Output: (XX:XX)
#Sample input 1:15 PM
#output 13:15

time_12 = input()

if 'AM' in time_12:
    print("vormittag")