# BROTHERS

**Source:** JUDE - UFBA

**Author:** Adapted by Caique Ramos

## Summary

A sushi restaurant displays `N` types of sushi in a line. The `i`-th type has `Si` pieces available.

Traditional sushi is always located at **odd** positions, while hot rolls are always located at **even** positions.

When a customer orders a segment `[l, r]`, they receive every sushi type within that range. Todou only eats traditional sushi, while Itadori only eats hot rolls.

Your task is to find any segment `[l, r]` such that both of them eat the same total number of sushi pieces. If no such segment exists, print `-1`.

## Input

The first line contains an integer `N`, the number of sushi types.

The second line contains `N` integers `S1, S2, ..., SN`, where `Si` is the number of pieces of the `i`-th sushi type.

## Output

Print two integers `l` and `r` representing any valid segment where the total number of traditional sushi pieces equals the total number of hot roll pieces.

If no such segment exists, print `-1`.

## Notes

- Traditional sushi appears at odd indices.
- Hot rolls appear at even indices.
- The selected segment must be contiguous.
- Any valid answer may be printed.
- `1 ≤ N ≤ 10⁵`.

## Example

### Input

```text
3
1 3 2
```

### Output

```text
1 3
```

### Explanation

The selected segment contains all sushi types. Todou eats the sushi at odd positions (`1 + 2 = 3`), while Itadori eats the sushi at the even position (`3`). Since both totals are equal, the segment is valid.
