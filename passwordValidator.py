'''password recommendation - password is considered strong if it has more than 7 characters, at least two numbers and two spacial characters'''

import re

password = input()

pattern1 = re.compile('\d')
pattern2 = re.compile('!|@|#|\$|%|&|\*')

if len(password) > 7 and len(pattern1.findall(password)) > 1 and len(pattern2.findall(password)) > 1:
    print('Strong')
else:
    print('Weak')