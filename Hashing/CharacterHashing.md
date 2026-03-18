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

## 🔵 Using Hash Array of Size 256 (All Characters)

If the string contains all types of characters like:
- lowercase (a–z)
- uppercase (A–Z)
- digits (0–9)
- symbols (@, #, $, etc.)

Then we use:

```cpp
int hash[256] = {0};
🔁 Counting Frequencies
for(int i = 0; i < s.size(); i++){
    hash[s[i]]++;
}
💡 Explanation

s[i] is a character

Every character has an ASCII value

That ASCII value directly acts as index

So we do NOT subtract 'a' or 'A'

💥 Example

String: Aappl3@

'A' → ASCII 65 → hash[65]++

'a' → ASCII 97 → hash[97]++

'3' → ASCII 51 → hash[51]++

'@' → ASCII 64 → hash[64]++

🔍 Query
char c;
cin >> c;
cout << hash[c];

👉 Directly prints frequency

🎯 Final Understanding

No need of c - 'a'

Use character directly as index

Works for all ASCII characters