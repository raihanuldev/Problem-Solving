# Dhaka Land Gallery — production problems

Problems taken from real features of the Dhaka Land Gallery project (a location-based land listing marketplace). The location hierarchy there is a rooted tree:

```
Dhaka → Area → Sub-Area / Block / Sector → listings
```

Each problem is one real feature, written as a competitive-programming task.

| # | Problem | Difficulty | Real feature | Solved |
|---|---|---|---|---|
| 01 | [Area Page Counter](01-area-page-counter/statement.md) | Medium | "Total available listings" on every area page | [ ] |
| 02 | [Deactivated Areas](02-deactivated-areas/statement.md) | Hard | Admin deactivates a location; everything under it is hidden | [ ] |
| 03 | [Moving a Block](03-moving-a-block/statement.md) | Very hard | Admin moves a block to another area | [ ] |

## How to use

- Each folder has a `statement.md`. Put your solution next to it as `solution.cpp`.
- Every statement has one worked example with an explanation. Check your output against it first.
- Solve them in order; 02 and 03 both build on 01, but not on each other.
