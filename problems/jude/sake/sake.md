# O Sake Lendário

**Source:** JUDE - UFBA

**Author:** Adapted by Magno Macedo

## Summary

There are `n` stores selling the Legendary Sake, where the `i`-th store sells one bottle for `xᵢ` coins.

Jiraiya plans to buy sake over `q` different days. On the `i`-th day, he has a budget of `mᵢ` coins.

For each day, determine how many stores sell a bottle of sake for a price that does not exceed Jiraiya's budget.

## Input

The first line contains an integer `n`, the number of stores.

The second line contains `n` integers `x₁, x₂, ..., xₙ`, where `xᵢ` is the price of a bottle of sake in the `i`-th store.

The third line contains an integer `q`, the number of days.

Each of the next `q` lines contains an integer `mᵢ`, representing Jiraiya's budget for that day.

## Output

For each query, print the number of stores where Jiraiya can afford to buy one bottle of sake.

## Notes

- Each query is independent.
- A store counts if its price is **less than or equal to** the available budget.
- `1 ≤ n, q ≤ 10⁴`.

## Example

### Input

```text
5
3 10 8 6 11
4
1
10
3
11
```

### Output

```text
0
4
1
5
```

### Explanation

- With a budget of `1`, Jiraiya cannot afford sake in any store.
- With a budget of `10`, he can buy from the stores with prices `3`, `6`, `8`, and `10`.
- With a budget of `3`, only the first store is affordable.
- With a budget of `11`, every store is affordable.
