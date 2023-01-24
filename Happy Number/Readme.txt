The happy number can be defined as a number which will yield 1 when it is replaced by the sum of the square of its digits repeatedly.
If this process results in an endless cycle of numbers containing 4, then the number is called an unhappy number.

Example:

Input: 32

Output: Yes

Explanation:

STEP 01:
             i) first take digit 2
             ii) then square it 2*2=4
             iii) Now take next digit 3
             iv) then square it 3*3=9
             v) Now add it together = 4 + 9 =13
            
STEP 02:
            i) take the value 13 and repeat the methods until you get 1 or 4
            ii) again follow the steps
            iii) take digit 3
            iv) then square it 3*3=9
            v) Now take next digit 1
            vi) then square it 1*1=1
            vii) Now add it together = 9 + 1 = 10
 
STEP 03:
            i) take the value 10 and repeat the methods until you get 1 or 4
            ii) again follow the steps
            iii) take digit 0
            iv) then square it 0*0=0
            v) Now take next digit 1
            vi) then square it 1*1=1
            vii) Now add it together = 0 + 1 = 1
 
STEP 04:
            i) Now we got value == 1
            so it is a happy number.



Input: 16

Output: No

Explanation:

STEP 01:
             i) first take digit 6
             ii) then square it 6*6=36
             iii) Now take next digit 1
             iv) then square it 1*1=1
             v) Now add it together = 36+1=37
            
STEP 02:
            i) take the value 37 and repeat the methods until you get 1 or 4
            ii) again follow the steps
            iii) take digit 7
            iv) then square it 7*7=49
            v) Now take next digit 3
            vi) then square it 3*3=9
            vii) Now add it together = 49 + 9 = 58
 
STEP 03:
            i) take the value 58 and repeat the methods until you get 1 or 4
            ii) again follow the steps
            iii) take digit 8
            iv) then square it 8*8=64
            v) Now take next digit 5
            vi) then square it 5*5=25
            vii) Now add it together = 64+25=89

STEP 04:
            i) take the value 89 and repeat the methods until you get 1 or 4
            ii) again follow the steps
            iii) take digit 9 
            iv) then square it 9*9=81
            v) Now take next digit 8
            vi) then square it 8*8=64
            vii) Now add it together = 81+64=145
            
 STEP 05:
            i) take the value 145 and repeat the methods until you get 1 or 4
            ii) again follow the steps
            iii) take digit 5
            iv) then square it 5*5=25
            v) Now take next digit 4
            vi) then square it 4*4=16
            vii) now take next next digit 1
            viii) then square it 1*1=1
            vii) Now add it together = 25+16+1=42

STEP 06:
            i) take the value 42 and repeat the methods until you get 1 or 4
            ii) again follow the steps
            iii) take digit 2 
            iv) then square it 2*2=4
            v) Now take next digit 4
            vi) then square it 4*4=16
            vii) Now add it together = 16+4=20
            
STEP 07:
            i) take the value 20 and repeat the methods until you get 1 or 4
            ii) again follow the steps
            iii) take digit 2 
            iv) then square it 2*2=4
            v) Now take next digit 0
            vi) then square it 0*0=0
            vii) Now add it together = 4+0=4
STEP 08:
            i) Now we got value == 4
            so it is not a happy number.
            
             
