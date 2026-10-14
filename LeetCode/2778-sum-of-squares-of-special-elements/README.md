# 2778. Sum of Squares of Special Elements 

**Difficulty:** `Easy` | **Topics:** `Array`, `Enumeration` | [LeetCode Problem](https://leetcode.com/problems/sum-of-squares-of-special-elements/)

---

### Problem Description

You are given a **1-indexed** integer array `nums` of length `n`.

An element `nums[i]` of `nums` is called **special** if `i` divides `n`, i.e. `n % i == 0`.

Return *the **sum of the squares** of all **special** elements of *`nums`.

 

<strong class="example">Example 1:</strong>

```

**Input:** nums = [1,2,3,4]
**Output:** 21
**Explanation:** There are exactly 3 special elements in nums: nums[1] since 1 divides 4, nums[2] since 2 divides 4, and nums[4] since 4 divides 4. 
Hence, the sum of the squares of all special elements of nums is nums[1] * nums[1] + nums[2] * nums[2] + nums[4] * nums[4] = 1 * 1 + 2 * 2 + 4 * 4 = 21.  

```

<strong class="example">Example 2:</strong>

```

**Input:** nums = [2,7,1,19,18,3]
**Output:** 63
**Explanation:** There are exactly 4 special elements in nums: nums[1] since 1 divides 6, nums[2] since 2 divides 6, nums[3] since 3 divides 6, and nums[6] since 6 divides 6. 
Hence, the sum of the squares of all special elements of nums is nums[1] * nums[1] + nums[2] * nums[2] + nums[3] * nums[3] + nums[6] * nums[6] = 2 * 2 + 7 * 7 + 1 * 1 + 3 * 3 = 63. 

```

 

**Constraints:**

	- `1 <= nums.length == n <= 50`

	- `1 <= nums[i] <= 50`

---

## 🧠 Logic & Approach Breakdown

### 💡 Approach & Intuition

**Detected Pattern:** `Optimized Single-Pass Traversal`

Processes elements sequentially in a single pass while tracking required state, avoiding redundant nested re-evaluations.

#### 🚫 Why Not Brute Force?
Nested iterations re-checking previously processed states take O(n²) time.

Single-pass execution processes each element in linear O(n) time, scaling cleanly up to large constraints.

#### ⭐️ Key Points
- **Process inputs in a single forward iteration.**
- **Maintain running state dynamically to make immediate decisions.**
- **Early exit as soon as target condition is satisfied.**

---

### 🧪 Step-by-Step Visual Dry Run

**Sample Input:** `Sample testcase`

#### Step 1:
- **State:** `Initial state`
- **Action:** Process element, update state, and check condition.

🎉 **Result:** `Target condition reached.`

---

### ⏱️ Complexity Analysis
- **Time Complexity:** `O(n)` — Single linear pass over the input of size n.
- **Space Complexity:** `O(1)` — Requires minimal auxiliary variables.

---

### 📝 Summary
An optimal linear time approach that processes each element sequentially with minimal memory overhead.


---

*Synced automatically by [CodeCrus](https://github.com/Krishnadev_sharma)*
