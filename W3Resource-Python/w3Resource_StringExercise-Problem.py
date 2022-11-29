# 2. Write a Python program to count the number of characters (character frequency) in a string. Go to the editor
# Sample String : google.com'
# Expected Result : {'g': 2, 'o': 3, 'l': 1, 'e': 1, '.': 1, 'c': 1, 'm': 1}
# Code:
# line=input()
# unique=set({})
# wordDict={};
# for i in range(len(line)):
#     unique.add(line[i])
# unique=list(unique)
# for i in range(len(unique)):
#     wordDict[unique[i]]=line.count(unique[i])
# for x,y in wordDict.items():
#     print(x,y)
#______________________________________________________________________
# 3.Write a Python program to get a string made of the first 2 and the last 2 chars from a given a string. If the string length is less than 2, return instead of the empty string. Go to the editor
# Sample String : 'w3resource'
# Expected Result : 'w3ce'
# Sample String : 'w3'
# Expected Result : 'w3w3'
# Sample String : ' w'
# Expected Result : Empty String
# Code:
# line=input()
# if len(line)<2:
#     print(" ")
# else:
#     print(f"{line[0:2]}{line[-2:]}")

# 4. Write a Python program to get a string from a given string where all occurrences of its first char have been changed to '$', except the first char itself. Go to the editor
# Sample String : 'restart'
# Expected Result : 'resta$t'
# Code:
# line=input()
# result=line.replace(line[0],"$")
# print(line[0]+result[1:])

# ________________________________________________________
# 5. Write a Python program to get a single string from two given strings, separated by a space and swap the first two characters of each string. Go to the editor
# Sample String : 'abc', 'xyz'
# Expected Result : 'xyc abz'
# Code:
# x,y=input().split()
# z=y[0]+x[1:]+x[0]+y[1:]
# print(z)
# __________________________________________________________________________________
# 6. Write a Python program to add 'ing' at the end of a given string (length should be at least 3). If the given string already ends with 'ing' then add 'ly' instead. If the string length of the given string is less than 3, leave it unchanged. Go to the editor
# Sample String : 'abc'
# Expected Result : 'abcing'
# Sample String : 'string'
# Expected Result : 'stringly'
#
# Code:
# x=input()
# if len(x)<3:
#     print(x)
# elif x.endswith("ing"):
#     print(x.replace("ing","ly"))
# else:
#     print(x+"ing")