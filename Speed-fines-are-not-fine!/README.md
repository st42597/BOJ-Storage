# [Bronze IV] Speed-fines-are-not-fine! - 6763 

[문제 링크](https://www.acmicpc.net/problem/6763) 

### 성능 요약

메모리: 30860 KB, 시간: 68 ms

### 분류

구현(implementation)

### 문제 설명

Many communities now have “radar” signs that tell drivers what their speed is, in the hope that they will slow down.

You will output a message for a “radar” sign. The message will display information to a driver based on his/her speed according to the following table:


 
  
   km/h over the limit
   Fine
  
  
   1 to 20
   $100
  
  
   21 to 30
   $270
  
  
   31 or above
   $500
### 입력 

 The input will be two integers. The first line of input will be speed limit. The second line of input will be the recorded speed of the car.
### 출력 

 If the driver is not speeding, the output should be:

Congratulations, you are within the speed limit! 

If the driver is speeding, the output should be:

You are speeding and your fine is $F. 

where F is the amount of the fine as described in the table above.


