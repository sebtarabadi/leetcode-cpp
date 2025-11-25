# C++ Syntax for common operations

## Sets

### Unordered Set (HashSet)

```cpp
// Create
unordered_set<int> st;
unordered_set<string> s;

// Insert / Update
st.insert(x);   // Inserts x
st.emplace(x);  // Slightly faster, constructs in-place

// Check Existence
if (st.count(x)) { ... }        // Returns 1 if exists, 0 otherwise
if (st.find(x) != st.end()) { ... } // Iterator approach
```

### Unordered Map (HashMap)

```cpp
// Create
unordered_map<int, int> freq;
unordered_map<string, vector<int>> mp;

// Insert / Update
freq[x]++;
mp[key] = value;
mp.insert({key, value});
mp.emplace(key, value);

// Check Existence
if (mp.count(key)) // Returns 1 if exists, 0 otherwise
if (mp.find(key) != mp.end()) // Iterator approach
```





