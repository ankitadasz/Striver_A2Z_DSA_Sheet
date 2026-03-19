
# Hashing – Prestoring and Fetching

### Array Size Limits (C++)

- **Inside `main()` (local array)**
  - Integer array: up to **10⁶** elements  
    - More than this may cause **segmentation fault** (stack overflow)
  - Boolean array: up to **10⁷** elements

- **Global arrays**
  - Integer array: up to **10⁷** elements
  - Boolean array: up to **10⁸** elements

**Reason:**  
- Local arrays are stored in **stack memory** (limited size)  
- Global arrays are stored in **data segment/heap** (larger memory available)

---

## Concept in Hashing

- **Prestoring**: Store frequencies or values in a hash array  
- **Fetching**: Directly access stored values in **O(1)** time

---

## 1. Input Array

```cpp
int n;
cin >> n;
int arr[n];
cout << "Enter the array element:";
for(int i = 0; i < n; i++){
    cin >> arr[i];
}
````

* User enters size `n`
* Then enters `n` elements

**Example:**

```
n = 5
arr = 1 3 2 1 3
```

---

## 2. Precomputation (Hashing)

```cpp
int hash[13] = {0};
for(int i = 0; i < n; i++){
    hash[arr[i]] += 1;
}
```

**What happens here?**

* `hash` array stores **frequency of numbers**
* Size = 13 → it can store values from **0 to 12**
* Initially all values are **0**

**Example Table:**

| Number | Frequency |
| ------ | --------- |
| 0      | 0         |
| 1      | 2         |
| 2      | 1         |
| 3      | 2         |
| 4–12   | 0         |

* 1 appears **2 times**
* 2 appears **1 time**
* 3 appears **2 times**

This step is called **precomputation**.

---

## 3. Fetching (Queries)

```cpp
int q;
cin >> q;
while(q--){
    int number;
    cin >> number;
    cout << hash[number] << endl;
}
```

* User enters number of queries
* For each query:

  * Enter a number
  * Program prints its frequency

**Example:**

```
q = 3
Query: 1 → Output: 2
Query: 2 → Output: 1
Query: 4 → Output: 0
```

---

## 4. Why Hashing is Useful?

Without hashing:

* Each query → search whole array → **O(n)**

With hashing:

* Precompute once → **O(n)**
* Each query → **O(1)**

**Total time = O(n + q)** (very fast)

---

## 5. Important Points (Interview)

1. `hash[index]` = frequency of that number
2. Hash array size must be **>= maximum value**
3. Example:

```cpp
int hash[13];
```

→ Values should be between **0–12**

⚠️ If input contains a larger number (like 20), it may cause **error/segmentation fault**.

---

## 6. Memory Limits (Very Important)

### Local Arrays (inside `main()`)

* Integer array: up to **10⁶**
* Boolean array: up to **10⁷**
* More than this may cause **segmentation fault** (stack overflow)

### Global Arrays

* Integer array: up to **10⁷**
* Boolean array: up to **10⁸**

**Reason:**

* Local arrays → stored in **stack** (limited)
* Global arrays → stored in **data segment** (larger memory)

---

## 7. Simple Summary

This program:

1. Takes an array
2. Stores frequency using hashing (prestoring)
3. Answers queries instantly (fetching)
4. Makes multiple queries very efficient

---

## Maps and Unordered Maps in C++

**`std::map`** stores key-value pairs in **sorted order** (ascending by key) automatically. Sorting happens **when iterating** through the map. Each element in the map is a pair, where `.first` refers to the **key** and `.second` refers to the **value**.

Example:

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    map<char,int> mpp;
    mpp['b'] = 2;
    mpp['a'] = 1;
    mpp['c'] = 3;

    for(auto it : mpp) {
        cout << it.first << " : " << it.second << endl;
    }
    return 0;
}
```

**Output:**

```
a : 1
b : 2
c : 3
```

---

**`std::unordered_map`** stores key-value pairs in **random order** (no sorting). Faster for access, but iteration order is unpredictable. Each element is still a pair, so `.first` is the key and `.second` is the value.

Example:

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_map<char,int> umpp;
    umpp['b'] = 2;
    umpp['a'] = 1;
    umpp['c'] = 3;

    for(auto it : umpp) {
        cout << it.first << " : " << it.second << endl;
    }
    return 0;
}
```

**Possible Output:**

```
b : 2
c : 3
a : 1
```

*(The order can vary each time you run the program)*

---

💡 **Key Points:**

* Use `map` if you want **sorted keys** automatically.
* Use `unordered_map` if you only care about **fast access** and don’t need ordering.
* Iterating a `map` prints keys in **ascending order**.
* Iterating an `unordered_map` prints keys in **arbitrary order**.
* `.first` always refers to the **key**, `.second` always refers to the **value**.




