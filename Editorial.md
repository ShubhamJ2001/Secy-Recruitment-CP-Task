**Editorial :**<br>
The problem is self explanatory, what we have to do is we should navigate through the string using a loop or an iterator (whatever preferred) and look for a triplet(as mentioned 
in the problem). Once we found our first triplet just reverse the letters or partial string before the middle letter (exclusive) then start from the index of the middle letter
and look for another triplet. If there is another triplet then again reverse the string between two triplets (we already knew the index of previous triplet's middle letter). This way letters will be reversed and the middle letters of triplets will be at their original place.
