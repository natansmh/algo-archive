# Love Lupulus

**Source:** JUDE - UFBA

## Summary

There are two rows of beers, each containing `n` beers arranged from left to right. The first row contains Pale Ales, while the second row contains Lagers. Each beer has an associated flavor score.

Anna wants to maximize the total flavor score of the beers she drinks while following these rules:

- She may start with any beer from either row.
- Each subsequent beer must come from the opposite row.
- Beer indices must be strictly increasing, meaning she can only move from left to right.

Determine the maximum total flavor score that can be obtained.

## Input

The first line contains an integer `n`, the number of beers in each row.

The second line contains `n` integers representing the flavor scores of the beers in the **Pale Ale** row.

The third line contains `n` integers representing the flavor scores of the beers in the **Lager** row.

## Output

Print a single integer representing the maximum total flavor score that Anna can achieve while following the selection rules.

## Notes

- Anna may start from either row.
- Consecutive beers must always come from different rows.
- The indices of the selected beers must be strictly increasing.
- It is not necessary to select beers from every column.
- `1 ≤ n ≤ 10⁵`.
- Flavor score f, `1 ≤ f ≤ 10⁹`.

## Example

### Input

```text
5
9 3 5 7 3
5 8 1 4 5
```

### Output

```text
29
```

### Explanation

An optimal strategy is to alternate between the two rows while always moving to the right, choosing the sequence that maximizes the sum of flavor scores.
