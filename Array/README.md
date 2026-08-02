# Arrays

## Patterns Learned
- Linear traversal (checking each element sequentially)
- Extra Space / Auxiliary Array
- Two Pointer (swap and converge)
- Binary Search (divide and conquer on sorted data)
- Brute Force Generation (nested loops for all pairs/subarrays)
- Running Maximum tracking
- Running Sum + Maximum tracking (carry forward, no recomputation)
- Kadane's Algorithm (reset when sum becomes liability)
- Running Minimum + Running Maximum (track best buy, best profit)
- Prefix/Suffix Array (precompute left and right maximums)

## Problems

| # | Problem | Pattern | TC | SC | Link |
|---|---------|---------|----|----|------|
| 1 | Linear Search | Sequential Traversal | O(n) | O(1) | [LeetCode](link) |
| 2 | Reverse Array (Extra Space) | Auxiliary Array | O(n) | O(n) | [LeetCode](link) |
| 3 | Reverse Array (In-Place) | Two Pointer | O(n) | O(1) | [LeetCode](link) |
| 4 | Binary Search | Divide and Conquer | O(log n) | O(1) | [LeetCode](link) |
| 5 | Print All Subarrays (Brute Force) | Nested Loops (start-end-print) | O(n³) | O(1) | - |
| 6 | Max Subarray Sum (Brute Force) | Nested Loops + Running Max | O(n³) | O(1) | [LeetCode #53](link) |
| 7 | Max Subarray Sum (Better Brute Force) | Running Sum + Running Max | O(n²) | O(1) | [LeetCode #53](link) |
| 8 | Max Subarray Sum (Kadane's) | Greedy Reset + Running Max | O(n) | O(1) | [LeetCode #53](link) |
| 9 | Best Time to Buy and Sell Stock | Running Min + Running Max | O(n) | O(1) | [LeetCode #121](link) |
| 10 | Trapping Rain Water | Prefix/Suffix Array | O(n) | O(n) | [LeetCode #42](link) |