# Recipiente com Mais Água

**Source:** JUDE - UFBA

**Author:** Adapted by Lucas Santana

## Summary

You are given the heights of `N` vertical logs placed in a straight line. Choose two logs to form the sides of a container.

The amount of water the container can hold is determined by the distance between the chosen logs multiplied by the height of the shorter log.

Your task is to determine the maximum amount of water that can be stored by selecting the best pair of logs.

## Input

The first line contains an integer `N`, the number of logs.

The second line contains `N` integers `h1, h2, ..., hN`, where `hi` is the height of the `i`-th log.

## Output

Print a single integer representing the maximum amount of water that can be stored between any two logs.

## Notes

- The container is formed by choosing any two logs.
- The container height is limited by the shorter of the two selected logs.
- The container width is the distance between the selected logs.
- `1 ≤ N ≤ 10⁵`.

## Example

### Input

```text
9
1 8 6 2 5 4 8 3 7
```

### Output

```text
49
```

### Explanation

The maximum volume is obtained by choosing the second and the ninth logs. The shorter log has height `7`, the distance between them is `7`, and the resulting volume is `7 × 7 = 49`.
