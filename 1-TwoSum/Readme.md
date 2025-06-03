# 🧮 Two Sum — Brute Force C++ Solution

This repository contains a simple C++ implementation of the classic **Two Sum** problem using a brute-force approach with nested loops.

---

## 🔍 Intuition

- We want to find **two numbers** in the array `nums` that **add up to a given `target`**.
- We try all possible pairs and check if their sum equals `target`.

---

## 🧠 Approach

- Use two nested loops:
  - Outer loop picks the first number.
  - Inner loop checks all numbers **after it** to form a pair.
- If a pair sums to the target, return their indices.
- If no such pair is found, return an empty vector.

---

## ⏱️ Complexity

- **Time Complexity:**  
  $$O(n^2)$$  
  (We check every possible pair of elements.)

- **Space Complexity:**  
  $$O(1)$$  
  (No extra data structures are used besides the return vector.)

---

## 🧩 Code

```cpp
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++) {
            for(int j = i + 1; j < nums.size(); j++) {
                if(nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};
