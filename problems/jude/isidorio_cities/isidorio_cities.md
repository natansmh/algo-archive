# Isidorio and Cities

**Source:** JUDE - UFBA

## Summary

There are `n` cities connected by `m` bidirectional roads. City `1` is the capital.

Additionally, there are `k` train routes that directly connect the capital to specific cities. Each train route has its own travel distance.

The governor wants to close as many train routes as possible while ensuring that the shortest distance from every city to the capital remains unchanged.

Determine the maximum number of train routes that can be removed without affecting any shortest path to the capital.

## Input

The first line contains three integers:

- `n` — number of cities;
- `m` — number of roads;
- `k` — number of train routes.

Each of the next `m` lines contains three integers:

- `uᵢ` and `vᵢ` — the endpoints of a bidirectional road;
- `xᵢ` — the length of that road.

Each of the next `k` lines contains two integers:

- `sᵢ` — destination city of the train route;
- `yᵢ` — length of the train route.

## Output

Print a single integer representing the maximum number of train routes that can be closed while preserving the shortest distance from every city to the capital.

## Notes

- Roads are bidirectional.
- Every train route connects the capital (city `1`) directly to another city.
- Multiple roads may connect the same pair of cities.
- Multiple train routes may connect the capital to the same city.
- It is guaranteed that every city is reachable from the capital.
- `2 ≤ n ≤ 10⁵`.
- `1 ≤ m ≤ 3 × 10⁵`.
- `1 ≤ xᵢ, yᵢ ≤ 10⁹`.

## Example

### Input

```text
5 5 3
1 2 1
2 3 2
1 3 3
3 4 4
1 5 5
3 5
4 5
5 2
```

### Output

```text
2
```

### Explanation

Some train routes may be redundant because an equally short path to the capital already exists using roads or other train routes. The goal is to remove as many redundant train routes as possible without increasing the shortest distance from any city to the capital.
