# O Medalhão dos Power Rangers

**Source:** JUDE - UFBA

**Author:** Adapted by Magno Macedo

## Summary

You are given an array of `n` integers representing the power levels of medal fragments, where `n` is always odd.

In a single operation, you may choose any fragment and decrease its power by `1`.

Using at most `k` operations, determine the minimum possible value of the median element of the array. The median is defined as the middle element after sorting the array in non-decreasing order.

## Input

The first line contains two integers:

- `n` — the number of fragments (`n` is odd);
- `k` — the maximum number of operations.

The second line contains `n` integers `v₁, v₂, ..., vₙ`, where `vᵢ` is the power level of the `i`-th fragment.

## Output

Print a single integer representing the smallest possible median after performing at most `k` operations.

## Notes

- Each operation decreases the value of a single element by exactly `1`.
- Any element may be chosen in each operation.
- The median is the middle element after sorting the array.
- `1 ≤ n ≤ 2 × 10⁵` and `n` is always odd.

## Example

### Input

```text
3 2
1 3 5
```

### Output

```text
1
```

### Explanation

The initial median is `3`. By spending both operations to decrease that value, the array can be transformed so that its median becomes `1`, which is the minimum possible.
