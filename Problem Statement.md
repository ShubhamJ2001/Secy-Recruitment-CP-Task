Problem :- You are given a string comprising of letters (all lowercase). Your task is to find a particular alphabtical order of **3** letters i.e abc , def , xyz etc. When you encounter this,
you have to reverse the string on the left till the middle letter(not included in reversing) of the alphabatical triplet. If there are multiple triplets then reverse the letters till the previous triplet (if any).


**Input**<br>
One string s which contains the given string of letters.

**Output**<br>
The reversed string accordingly.

**Examples**<br>
1. 
INPUT:<br> 
 s = uyiabcfg

OUTPUT<br>
 aiyubcfg


2.<br>
INPUT:<br>
 s = pliabcxldefz

OUTPUT:<br>
 ailpbdlxcefz

3<br>
INPUT:<br>
 s = abcxyz
 
OUTPUT:<br>
 abcxyz





