# Task 1 - character arrays and strings#
 
1. **character arrays are not strings**

Small example showing how character arrays differ from strings.

Question: 
- Explain why printing the array as a string (%s) causes a strange result.
- Hint: Think about how C data is stored in memory. 
- Test this by changing the second string to something other than "hello".

in memory it saves as an array first and then a string, so the compiler reads it as one line and since the string has the null char it think this is where the things ends.