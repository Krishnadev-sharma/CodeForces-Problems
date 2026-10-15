# 2913. Subarrays Distinct Element Sum of Squares I

**Difficulty:** `Easy` | **Topics:** `Array`, `Hash Table`, `Binary Indexed Tree`, `Segment Tree` | [LeetCode Problem](https://leetcode.com/problems/subarrays-distinct-element-sum-of-squares-i/)

---

### Problem Description

You are given a **0-indexed **integer array `nums`.

The **distinct count** of a subarray of `nums` is defined as:

	- Let `nums[i..j]` be a subarray of `nums` consisting of all the indices from `i` to `j` such that `0 <= i <= j < nums.length`. Then the number of distinct values in `nums[i..j]` is called the distinct count of `nums[i..j]`.

Return *the sum of the **squares** of **distinct counts** of all subarrays of *`nums`.

A subarray is a contiguous **non-empty** sequence of elements within an array.

 

<strong class="example">Example 1:</strong>

```

**Input:** nums = [1,2,1]
**Output:** 15
**Explanation:** Six possible subarrays are:
[1]: 1 distinct value
[2]: 1 distinct value
[1]: 1 distinct value
[1,2]: 2 distinct values
[2,1]: 2 distinct values
[1,2,1]: 2 distinct values
The sum of the squares of the distinct counts in all subarrays is equal to 1<sup>2</sup> + 1<sup>2</sup> + 1<sup>2</sup> + 2<sup>2</sup> + 2<sup>2</sup> + 2<sup>2</sup> = 15.

```

<strong class="example">Example 2:</strong>

```

**Input:** nums = [1,1]
**Output:** 3
**Explanation:** Three possible subarrays are:
[1]: 1 distinct value
[1]: 1 distinct value
[1,1]: 1 distinct value
The sum of the squares of the distinct counts in all subarrays is equal to 1<sup>2</sup> + 1<sup>2</sup> + 1<sup>2</sup> = 3.
```

 

**Constraints:**

	- `1 <= nums.length <= 100`

	- `1 <= nums[i] <= 100`

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
