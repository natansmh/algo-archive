# Rubisley e o seu carro novo

**Source:** JUDE - UFBA

**Author:** Adapted by Gabriel Sizinio

## Summary

A combination lock has a circular scale of `360` degrees, and its pointer initially points to `0`.

You are given `n` rotations, where the `i`-th rotation has an angle `aᵢ`. Each rotation may be performed either **clockwise** or **counterclockwise**.

Determine whether there exists a choice of directions such that, after performing all rotations, the pointer points to `0` again.

## Input

The first line contains an integer `n`, the number of rotations.

Each of the next `n` lines contains an integer `aᵢ`, representing the angle of the `i`-th rotation.

## Output

Print:

- `SIM` if it is possible to perform all rotations and finish with the pointer at `0`;
- `NAO` otherwise.

## Notes

- Each rotation must be performed exactly once.
- Every rotation can be applied either clockwise or counterclockwise.
- The pointer starts at `0` on a circular scale of `360` degrees.
- `1 ≤ n ≤ 15`.
- `1 ≤ aᵢ ≤ 180`.

## Example

### Input

```text
3
10
20
30
```

### Output

```text
SIM
```

### Explanation

One valid solution is to rotate `10°` and `20°` clockwise, and `30°` counterclockwise. The resulting angle is a multiple of `360`, so the pointer returns to `0`.
