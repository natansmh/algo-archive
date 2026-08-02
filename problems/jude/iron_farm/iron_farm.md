# A Farm de Ferro (e a Fome de Steve)

**Source:** JUDE - UFBA

**Author:** Magno Macedo

## Summary

A directed graph represents the paths between locations in Steve's Minecraft world. Each edge has an associated food cost:

- A positive value means Steve consumes food while traveling.
- A negative value means Steve gains food by finding supplies along the way.

Given Steve's starting location and Alex's location, determine the minimum total food cost required to reach Alex.

If it is impossible to reach Alex, or if there exists a reachable negative cycle that can also reach Alex (allowing Steve to reduce the total cost indefinitely), print `IMPOSSIVEL`.

## Input

The first line contains two integers:

- `n` — number of locations;
- `m` — number of directed paths.

The second line contains two integers:

- `s` — Steve's starting location;
- `a` — Alex's location.

Each of the next `m` lines contains three integers:

- `u` — starting location of the path;
- `v` — destination location;
- `w` — food cost of traveling from `u` to `v`.

## Output

Print the minimum total food cost to travel from Steve's location to Alex's location.

Print `IMPOSSIVEL` if:

- Alex cannot be reached; or
- A reachable negative cycle exists on a path to Alex.

## Notes

- The graph is directed.
- Edge weights may be positive or negative.
- A negative cycle represents an unlimited food gain.
- Such a cycle only matters if Steve can reach it and still reach Alex afterward.
- `2 ≤ n ≤ 100`.
- `1 ≤ m ≤ 100`.

## Example

### Input

```text
4 4
1 4
1 2 5
2 4 3
1 3 10
3 4 -12
```

### Output

```text
-2
```

### Explanation

There are two possible routes to Alex. Traveling through locations `1 → 3 → 4` costs `10 + (-12) = -2`, which is less than the cost of the alternative route (`8`). Therefore, the minimum total food cost is `-2`.
