# 02. Deactivated Areas

**Difficulty:** Hard
**Real feature:** an administrator can deactivate a location instead of deleting it (Requirements §5.2). Everything under a deactivated location disappears from the public site, and comes back when the location is activated again.

Solve [01. Area Page Counter](../01-area-page-counter/statement.md) first.

## Statement

The setup is the same as problem 01: `N` locations in a rooted tree, location `1` is the root, each location has some available plots attached directly to it.

Every location is either **active** or **inactive**. At the start all locations are active.

A location is **visible** only if it is active and every location on the path from it up to the root is also active. Plots at a location that is not visible are not counted anywhere.

Process `Q` operations:

- `1 v x` — the number of plots at location `v` changes by `x`. This is allowed even when `v` is not visible.
- `2 v` — print the total number of plots at **visible** locations in the subtree of `v` (including `v`).
- `3 v` — toggle location `v`: active becomes inactive, inactive becomes active.

## Input

```
N Q
p_2 p_3 ... p_N
a_1 a_2 ... a_N
(Q lines, each "1 v x", "2 v" or "3 v")
```

## Output

For every operation of type `2`, print the answer on its own line.

## Constraints

- `1 ≤ N, Q ≤ 2 × 10^5`
- `1 ≤ p_i < i`
- `0 ≤ a_i ≤ 10^9`
- `|x| ≤ 10^9`, and the number of plots at a location never becomes negative
- Time limit: 2 seconds
- Memory limit: 256 MB

## Example

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
6 13
1 1 2 2 3
0 0 2 3 5 4
2 1
3 2
2 1
2 4
1 4 2
3 5
3 2
2 2
2 1
3 5
2 1
3 1
2 3
```

Output:

```
14
6
0
5
11
16
0
```

Explanation:

- `2 1` → everything is visible = 14
- `3 2` → Bashundhara becomes inactive; Block A and Block C are hidden with it
- `2 1` → Uttara 2 + Sector 4 4 = 6
- `2 4` → Block A is active, but its parent is not, so 0
- `1 4 2` → Block A now has 5 (still hidden)
- `3 5` → Block C becomes inactive
- `3 2` → Bashundhara becomes active again; Block C stays inactive
- `2 2` → Bashundhara 0 + Block A 5 = 5
- `2 1` → 2 + 5 + 4 = 11
- `3 5` → Block C becomes active again
- `2 1` → 2 + 5 + 5 + 4 = 16
- `3 1` → the root becomes inactive, so nothing is visible
- `2 3` → 0

## Notes

- A location can be hidden for more than one reason at the same time (itself inactive, and an ancestor inactive). Activating one of them must not make it visible.
- Answers do not fit in 32 bits.
