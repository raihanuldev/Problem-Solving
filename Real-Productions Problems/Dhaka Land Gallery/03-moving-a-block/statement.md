# 03. Moving a Block

**Difficulty:** Very hard
**Real feature:** an administrator can reorganize the location hierarchy, for example move a block from one area to another ("Manage nested location structures", Requirements §5.2). Area page counters must stay correct after the move.

Solve [01. Area Page Counter](../01-area-page-counter/statement.md) first. This problem does not use the active / inactive rule from problem 02.

## Statement

The setup is the same as problem 01: `N` locations in a rooted tree, location `1` is the root, each location has some available plots attached directly to it.

Process `Q` operations **online** (each must be answered before reading the next):

- `1 v x` — the number of plots at location `v` changes by `x`.
- `2 v` — print the total number of plots in the subtree of `v` (including `v`).
- `3 v u` — move location `v`, together with its whole subtree, so that `u` becomes its new parent.

For every operation of type `3` it is guaranteed that `v ≠ 1` and that `u` is not inside the subtree of `v`. `u` may already be the parent of `v`, in which case nothing changes.

## Input

```
N Q
p_2 p_3 ... p_N
a_1 a_2 ... a_N
(Q lines, each "1 v x", "2 v" or "3 v u")
```

## Output

For every operation of type `2`, print the answer on its own line.

## Constraints

- `1 ≤ N, Q ≤ 2 × 10^5`
- `1 ≤ p_i < i` in the initial tree (after moves this no longer has to hold)
- `0 ≤ a_i ≤ 10^9`
- `|x| ≤ 10^9`, and the number of plots at a location never becomes negative
- Time limit: 3 seconds
- Memory limit: 256 MB

## Example

Initial tree:

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
6 14
1 1 2 2 3
0 0 2 3 5 4
2 2
2 3
3 5 3
2 2
2 3
1 5 1
3 3 4
2 4
1 2 10
2 2
3 6 1
2 3
2 2
2 1
```

Output:

```
8
6
3
11
15
25
8
21
25
```

Explanation:

- `2 2` → 0 + 3 + 5 = 8
- `2 3` → 2 + 4 = 6
- `3 5 3` → Block C moves under Uttara
- `2 2` → Bashundhara 0 + Block A 3 = 3
- `2 3` → Uttara 2 + Sector 4 4 + Block C 5 = 11
- `1 5 1` → Block C now has 6
- `3 3 4` → Uttara (with Sector 4 and Block C) moves under Block A
- `2 4` → Block A 3 + Uttara 2 + Sector 4 4 + Block C 6 = 15
- `1 2 10` → Bashundhara now has 10
- `2 2` → 10 + 15 = 25
- `3 6 1` → Sector 4 moves directly under Dhaka
- `2 3` → Uttara 2 + Block C 6 = 8
- `2 2` → 10 + 3 + 2 + 6 = 21
- `2 1` → everything = 25

Tree at the end:

```
1 Dhaka (0)
├─ 2 Bashundhara (10)
│  └─ 4 Block A (3)
│     └─ 3 Uttara (2)
│        └─ 5 Block C (6)
└─ 6 Sector 4 (4)
```

## Notes

- The technique from problem 01 breaks here, because a move changes the shape of the tree. Think about what exactly breaks, and what would have to be rebuilt.
- After solving it, compare your cost per move with how often a real administrator moves a block. The production system makes a different trade-off on purpose.
