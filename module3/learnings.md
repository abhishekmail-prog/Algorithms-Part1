# Analysis of Algorithms 

## What I learned

- Algorithms are analyzed to predict performance for large inputs.
- We can use the scientific method: Observe model, predict, and verify.
- Empirical analysis means running experiments and measuring runtime.
- The 3-SUM brute force solution uses three nested loops and grows roughly as N^3.
- Running time can be modeled as:

	Time = Cost x Frequency

- Instead of counting every instruction, we count a key operation (like array accesses).
- Tilde (~) notation hhelps ignore low-order terms and focus on the dominant term.
- For large N, growth rate matters more than constants.
- Single loop  -> N
- Double loop  -> N^2
- Triple loop  -> N^3

## New Learnings

- Common growth rates are: 1, log N, N, N log N, N^2m N^3 and 2 ^N.
- N and N log N algorithms scale mmuch better than N^2 and N^3 algorithms.
- Binary Search works only in sorted data.
- Binary Searh repeatedly halves the search space.
- Binary Search runs in O(log N) time.
- A problem can often be sped by using a better algorithm instead of faster hardware.
- The 3-SUM problem can be improved from O(N^3) to O(N^2 log N) using sorting and Binary Search.
- Better order of growth usually leads to much better real-world performance.
