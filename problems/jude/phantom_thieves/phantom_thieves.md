# Ajude os Phantom Thieves!

**Source:** JUDE - UFBA

**Author:** Lucas Soares

## Summary

Joker has `N` activities available throughout the day. Each activity has a start time and an end time.

Your task is to determine the maximum number of activities that can be completed without overlapping. An activity can only start after the previous one has finished. If one activity ends exactly when another begins, both can be performed.

## Input

The first line contains an integer `N`, the number of activities.

Each of the next `N` lines contains four integers:

- `H1 M1` — start time (hour and minute);
- `H2 M2` — end time (hour and minute).

It is guaranteed that every activity starts before it ends.
## Output

Print a single integer representing the maximum number of activities that can be completed in one day.

## Notes

- Activities must not overlap.
- If an activity ends exactly when another begins, both may be selected.
- `1 ≤ N ≤ 10⁵`.

## Example

### Input

```text
4
16 40 18 30
14 50 16 40
13 00 14 50
12 00 19 30
```

### Output

```text
3
```

### Explanation

One optimal schedule is to perform the activities from **13:00–14:50**, **14:50–16:40**, and **16:40–18:30**. Since each activity starts exactly when the previous one ends, all three can be completed.
