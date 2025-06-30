## 📚 STL Vector Quick Notes

### 🚀 `emplace_back` vs `push_back`
- `emplace_back` is **faster and better** than `push_back` because it **constructs the object in-place** without unnecessary copying.
- Example:
  ```cpp
  vector<int> v;
  v.emplace_back(10);  // directly constructs the value
  ```

---

### 📏 Dynamic vs Static Arrays

- After this line:
  ```cpp
  vector<int> vect(5);
  ```
  You can still use `push_back()` or `emplace_back()` to **add more elements** beyond size 5.

- In contrast, a **normal array** (e.g., `int arr[5]`) has **fixed size**. Once declared, its size **cannot be changed**.

---

### 🧭 Iterators

- **Iterators** are like pointers that point to the memory where vector elements are stored.
- To print elements using iterator:
  ```cpp
  vector<int> v(5, 100);
  vector<int>::iterator it = v.begin();
  cout << *it;  // prints the first element
  ```

- Common iterators:
  - `begin()` → Points to the first element
  - `end()` → Points just **after** the last element
  - `rbegin()` → Reverse begin (last element)
  - `rend()` → Reverse end (before first)

---

### 🧠 `auto` Keyword

- `auto` **automatically deduces the datatype** based on the assigned value.
  ```cpp
  auto it = v.begin();  // automatically knows it's vector<int>::iterator
  ```

---

### 🗑️ Deleting a Range of Elements in a Vector

- To delete multiple elements:
  ```cpp
  v.erase(start, end);
  ```
  - `start` → Iterator pointing to the **first element to delete**
  - `end` → Iterator pointing to the **position right after the last element to delete**

  Example:
  ```cpp
  v.erase(v.begin() + 1, v.begin() + 4);  // deletes elements at index 1, 2, 3
  ```

---

Let me know if you want this with code examples or images!
