# 📘 Frequency Array (My Explanation)

So basically what we are doing is:

First, we take a string, suppose it is `apple`.

Then we initialize an array:
```cpp
int hash[26] = {0};

All values are 0

Index value goes from 0 to 25

Now we run a loop from 0 to the size of the string.

Inside the loop:

hash[s[i] - 'a']++;

What happens here:

s[i] takes each character from the string

It subtracts 'a' from that character

This gives us an index value

Then we go to hash[index]

Since all values were 0, we use ++ to increase the count

We keep doing this until we reach the last character of the string.

After this loop:

We already know how many times each character appears

Then we take how many questions we want to ask:

int q;
cin >> q;

Now for each question:

We take a character we want to search

char c;
cin >> c;
cout << hash[c - 'a'];

What happens here:

c - 'a' gives the index value

We already calculated counts in the previous loop

So we just print the value stored in hash[index]

🎯 Final Understanding

First loop → store frequency

Second loop → print frequency

👉 s[i] - 'a' gives index
👉 hash[index] stores count
👉 ++ increases count