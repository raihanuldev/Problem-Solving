# 01. Area Page Counter

**Difficulty:** Medium
**Real feature:** every area page shows "Total available land listings" for that area, including all of its blocks and sectors (Requirements §4.2).

## Statement

Dhaka Land Gallery has `N` locations that form a rooted tree. Location `1` is the root (Dhaka). Every other location has exactly one parent.

Each location has some available plots attached **directly** to it.

Process `Q` operations:

- `1 v x` — the number of available plots at location `v` changes by `x`. `x` can be negative (plots were sold).
- `2 v` — print the number of plots shown on the page of location `v`: the total over `v` and every location below it.

## Input

```
N Q
p_2 p_3 ... p_N
a_1 a_2 ... a_N
(Q lines, each "1 v x" or "2 v")
```

- `p_i` is the parent of location `i`.
- `a_i` is the initial number of plots at location `i`.

## Output

For every operation of type `2`, print the answer on its own line.

## Constraints

- `1 ≤ N, Q ≤ 2 × 10^5`
- `1 ≤ p_i < i`
- `0 ≤ a_i ≤ 10^9`
- `|x| ≤ 10^9`, and the number of plots at a location never becomes negative
- Time limit: 1 second
- Memory limit: 256 MB

## Example

The tree, with the initial plots in brackets:

```
1 Dhaka (0)
├─ 2 Bashundhara (0)
│  ├─ 4 Block A (3)
│  └─ 5 Block C (5)
└─ 3 Uttara (2)
   └─ 6 Sector 4 (4)
```

Input:

```
6 7
1 1 2 2 3
0 0 2 3 5 4
2 2
2 1
1 5 -2
2 2
1 6 3
2 3
2 1
```

Output:

```
8
14
6
9
15
```

Explanation:

- `2 2` → Bashundhara 0 + Block A 3 + Block C 5 = 8
- `2 1` → everything = 14
- `1 5 -2` → Block C now has 3
- `2 2` → 0 + 3 + 3 = 6
- `1 6 3` → Sector 4 now has 7
- `2 3` → Uttara 2 + Sector 4 7 = 9
- `2 1` → everything = 15

## Notes

- Walking the whole subtree for every query is `O(N × Q)` and will not pass.
- Answers do not fit in 32 bits.
