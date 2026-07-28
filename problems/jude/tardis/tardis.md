# TARDIS

**Source:** JUDE - UFBA

## Summary

You are given a word `w` and an `n × m` grid of letters.

Determine whether it is possible to construct the word by moving through the grid one letter at a time. Consecutive letters must be located in adjacent cells (up, down, left, or right), and each cell may be used at most once while forming the word.

## Input

The first line contains two integers:

- `n` — number of rows;
- `m` — number of columns.

The second line contains the target word `w`.

The next `n` lines each contain `m` letters representing the grid.

## Output

Print:

- `SIM` if the word can be formed according to the movement rules;
- `NAO` otherwise.

## Notes

- Movement is allowed only in the four cardinal directions (up, down, left, and right).
- Diagonal moves are not allowed.
- Each cell may be visited at most once while constructing the word.
- `1 ≤ n, m ≤ 6`.
- `1 ≤ |w| ≤ 15`.

## Example

### Input

```text
3 3
WHO
WHO
XYZ
DOC
```

### Output

```text
SIM
```

### Explanation

The letters of the word can be visited in order by moving only through adjacent cells without reusing any position.
