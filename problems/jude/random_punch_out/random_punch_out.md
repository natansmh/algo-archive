# Random Punch Out

**Source:** JUDE - UFBA

**Author:** Igor Borja

## Summary

Little Mac must fight a sequence of `n` opponents. The `i`-th opponent requires `aᵢ` health points to defeat.

Unlike the original game, Little Mac **does not recover health between fights**, and each run starts at any fighter of your choice. Starting with an initial health value `h`, he can defeat a fighter only if his current health is at least `aᵢ`. After the fight, his health is reduced by `aᵢ` before moving to the next opponent.

Your task is to determine the maximum number of consecutive fighters that can be defeated, considering the best possible starting position.

## Input

The first line contains two integers:

- `n` — the number of fighters;
- `h` — Little Mac's initial health.

The second line contains `n` non-negative integers `a₁, a₂, ..., aₙ`, where `aᵢ` is the amount of health required to defeat the `i`-th fighter.

## Output

Print a single integer representing the maximum number of consecutive fighters that can be defeated in a single run. If no fighter can be defeated, print `0`.

## Notes

- A run may start at any fighter.
- Fighters must be defeated consecutively; skipping fighters is not allowed.
- Little Mac never recovers health during a run.
- `0 ≤ h ≤ 10¹⁸`.
- `1 ≤ n ≤ 10⁵`.

## Example

### Input

```text
7 20
2 6 4 3 6 8 9
```

### Output

```text
4
```

### Explanation

Starting from either the first or the second fighter, Little Mac can defeat four consecutive opponents before running out of health. No other starting position allows a longer run.
