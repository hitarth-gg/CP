# 1. Pairing items from groups such that paired items come from different groups

If you have group sizes $p_1, p_2, \ldots, p_k$, let

- $S = \sum_i p_i$ (total items),
- $M = \max_i p_i$ (largest group).

The maximum number of pairs you can form so that each pair's two items come from *different* groups is

$$\text{pairs} = \min\left(\left\lfloor \frac{S}{2} \right\rfloor, S - M\right).$$

## Why that formula is right (proof sketch)

- You can never exceed $\lfloor S/2 \rfloor$ total pairs because each pair uses two items.

- If the largest group is too large ($M > S/2$), then after pairing each of the $S - M$ items from the other groups with items from the large group, no items remain to pair — so you cannot make more than $S - M$ pairs.

- If $M \leq S/2$, you can always pair items so every pair is cross-group, and you can achieve $\lfloor S/2 \rfloor$ pairs (think of repeatedly matching any two different groups — there are enough items to avoid running out of partners).

So the minimum of those two bounds is tight.

```text
3 3 3
2 2 3
2 1 2
1 0 2
1 0 0
note: only 1 item left

3 3 4
3 2 3
3 1 2
2 1 1
1 0 1
0 0 0
note: all are paired
```
## Related Problems
- https://leetcode.com/problems/two-letter-card-game/description/

