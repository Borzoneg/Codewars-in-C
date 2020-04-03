# Codewars-in-C
Resolution of some challenges of the website 'Codewars' in C 

### Structure:
- **main.c**: main file from where i call all the function i'm gonna create, each function is relative to one challenge;
- **some_title.c**: file relative to one single challenge, the text of eache challenge are liste below.

### Challenges:
- ##### Counting Duplicate 
    *Count the number of Duplicates*
    - **Objective:** Write a function that will return the count of distinct case-insensitive alphabetic characters and numeric digits 
      that occur more than once in the input string. The input string can be assumed to contain only alphabets 
      (both uppercase and lowercase) and numeric digits. 
    - **Example**:
    
            "abcde" -> 0 # no characters repeats more than once
            "aabbcde" -> 2 # 'a' and 'b'
            "aabBcde" -> 2 # 'a' occurs twice and 'b' twice (`b` and `B`)
            "indivisibility" -> 1 # 'i' occurs six times
            "Indivisibilities" -> 2 # 'i' occurs seven times and 's' occurs twice
            "aA11" -> 2 # 'a' and '1'
            "ABBA" -> 2 # 'A' and 'B' each occur twice

- ##### Summing a number's digits
    *Count the number of Duplicates*
    - **Objective:** Write a function named sumDigits which takes a number as input and returns the sum of the absolute 
    value of each of the number's decimal digits.
    - **Example**:

          sum_digits(10)  // Returns 1
          sum_digits(99)  // Returns 18
          sum_digits(-32) // Returns 5
        