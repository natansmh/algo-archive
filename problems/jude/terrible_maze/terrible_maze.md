# O labirinto terrível

**Source:** JUDE - UFBA

**Author:** Bruno Emanoel Loiola Xavier

## Summary

A labyrinth consists of `N` rooms connected by `M` bidirectional corridors.

The heroes start in room `1` and must follow a specific order:

1. Reach Susie, who is in room `Ss`;
2. Then reach Lancer, who is in room `Sl`;
3. Finally, reach the exit in room `N`.

Determine the minimum number of rooms visited along such a path. If no valid path exists, print `-1`.

## Input

The first line contains four integers:

- `N` — number of rooms;
- `M` — number of corridors;
- `Ss` — room where Susie is located;
- `Sl` — room where Lancer is located.

Each of the next `M` lines contains two integers `Sa` and `Sb`, indicating a bidirectional corridor between those two rooms.

## Output

Print a single integer representing the minimum number of rooms visited on a path that starts at room `1`, visits `Ss`, then `Sl`, and finally reaches room `N`.

If no such path exists, print `-1`.

## Notes

- Corridors are bidirectional.
- Rooms and corridors may be revisited if doing so results in the shortest valid route.
- The required visiting order is **1 → Ss → Sl → N**.
- `3 ≤ N ≤ 5 × 10⁴`.
- `2 ≤ M ≤ min((N² − N)/2, 5 × 10⁴)`.

## Example

### Input

```text
5 4 3 4
1 2
2 3
3 4
4 5
```

### Output

```text
5
```

### Explanation

The shortest valid route is:

```text
1 → 2 → 3 (Ss) → 4 (Sl) → 5
```

This path visits the required rooms in the correct order and passes through a total of `5` rooms.
