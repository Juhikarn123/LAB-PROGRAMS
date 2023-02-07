/*Given a string A and a dictionary of n words B,find out if A can be segmented into a space-separated
sequence of dictionary words.

Note:From the dictionary B each word can be taken any number of times and in any order.
Example 1:
Input:
n=12
B={"i","like","sam","sung","samsung","mobile","ice","cream","icecream","man","go","mango"}
A="ilike"
Output:
1
Explanation:
The string can be segmented as "i like".

Example-2
Input:
n=12
B=B={"i","like","sam","sung","samsung","mobile","ice","cream","icecream","man","go","mango"}
A="ilikesamsung"
Output:
1
Explanation:
The string can be segmented as "i like samsung" or "i like sam sung."
*/
code:-
def wordBreak(word):
    global dictionary
    size = len(word)
    if (size == 0):
        return True
    for i in range(1,size + 1):
        if (word[0:i] in dictionary and wordBreak(word[i: size])):
            return True
    return False


dictionary = set()
temp_dictionary = [ "i","like","sam", "sung","mobile", "samsung","ice","cream","icecream","man","go","mango"]
for temp in temp_dictionary:
	dictionary.add(temp)

word=input()
if wordBreak(word) :
    print("1")
else:
    print("0")
    

