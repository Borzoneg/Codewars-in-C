# Codewars-in-C
Resolution of some challenges of the website 'Codewars' in C 

### Structure:
- **main.c**: main file from where i call all the function i'm gonna create, each function is relative to one challenge;
- **some_title.c**: file relative to one single challenge, the text of eache challenge are liste below.

### Challenges:
- ##### Counting Duplicate 
    - **Objective:** 
        Write a function that will return the count of distinct case-insensitive alphabetic characters and numeric digits 
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
    - **Objective:** 
        Write a function named sumDigits which takes a number as input and returns the sum of the absolute 
        value of each of the number's decimal digits.
    - **Example**:

          sum_digits(10)  // Returns 1
          sum_digits(99)  // Returns 18
          sum_digits(-32) // Returns 5
          
 - ##### A Rule of Divisibility by 13
      - **Objective:** 
        When you divide the successive powers of 10 by 13 you get the following remainders of the integer divisions:              
        1, 10, 9, 12, 3, 4. Then the whole pattern repeats. Hence the following method: Multiply the right most digit 
        of the number with the left most number in the sequence shown above, the second right most digit to the second 
        left most digit of the number in the sequence. The cycle goes on and you sum all these products. 
        Repeat this process until the sequence of sums is stationary.
        Call thirt the function which processes this sequence of operations on an integer n (>=0). thirt will return 
        the stationary number.
     - **Example**:
 
           What is the remainder when 1234567 is divided by 13?
           7×1 + 6×10 + 5×9 + 4×12 + 3×3 + 2×4 + 1×1 = 178
           We repeat the process with 178:
           8x1 + 7x10 + 1x9 = 87
           and again with 87:
           7x1 + 8x10 = 87
        
 - ##### Bouncing Balls
    - **Objective:**  
        A child is playing with a ball on the nth floor of a tall building. The height of this floor, h, is known.
        He drops the ball out of the window. The ball bounces (for example), to two-thirds of its height 
        (a bounce of 0.66).
        His mother looks out of a window 1.5 meters from the ground.
        How many times will the mother see the ball pass in front of her window (including when it's falling and bouncing?
        Three conditions must be met for a valid experiment:
        
        - Float parameter "h" in meters must be greater than 0
        - Float parameter "bounce" must be greater than 0 and less than 1
        - Float parameter "window" must be less than h.
        
        If all three conditions above are fulfilled, return a positive integer, otherwise return -1.
        
     - **Example:**
        - h = 3, bounce = 0.66, window = 1.5, result is 3
        - h = 3, bounce = 1, window = 1.5, result is -1 
        (Condition 2) not fulfilled).