# 2089. Find Target Indices After Sorting Array

**Difficulty:** `Easy` | **Topics:** `Array`, `Binary Search`, `Sorting` | [LeetCode Problem](https://leetcode.com/problems/find-target-indices-after-sorting-array/)

---

### Problem Description

You are given a **0-indexed** integer array `nums` and a target element `target`.

A **target index** is an index `i` such that `nums[i] == target`.

Return *a list of the target indices of* `nums` after* sorting *`nums`* in **non-decreasing** order*. If there are no target indices, return *an **empty** list*. The returned list must be sorted in **increasing** order.

 

<strong class="example">Example 1:</strong>

```

**Input:** nums = [1,2,5,2,3], target = 2
**Output:** [1,2]
**Explanation:** After sorting, nums is [1,<u>**2**</u>,<u>**2**</u>,3,5].
The indices where nums[i] == 2 are 1 and 2.

```

<strong class="example">Example 2:</strong>

```

**Input:** nums = [1,2,5,2,3], target = 3
**Output:** [3]
**Explanation:** After sorting, nums is [1,2,2,<u>**3**</u>,5].
The index where nums[i] == 3 is 3.

```

<strong class="example">Example 3:</strong>

```

**Input:** nums = [1,2,5,2,3], target = 5
**Output:** [4]
**Explanation:** After sorting, nums is [1,2,2,3,<u>**5**</u>].
The index where nums[i] == 5 is 4.

```

 

**Constraints:**

	- `1 <= nums.length <= 100`

	- `1 <= nums[i], target <= 100`

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
