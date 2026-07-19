# Shootout Showdown: Rubisley's World Cup Dream

**Source:** JUDE - UFBA

**Author:** Dely Silva

## Summary

Given a string of 10 characters representing the possible outcomes of a penalty shootout, determine the earliest kick at which the winner can already be mathematically decided.

Each character has one of the following meanings:

- `1`: the kick is a goal;
- `0`: the kick is missed;
- `?`: the outcome is unknown and may be either a goal or a miss.

The first team kicks on odd turns, while the second team kicks on even turns. The shootout ends as soon as one team has a lead that the opponent can no longer overcome with its remaining kicks.

Your task is to compute the minimum number of kicks after which the shootout could end.

## Input

A string `s` of length **10**, where each character is one of:

- `1`
- `0`
- `?`

## Output

Print a single integer representing the earliest kick at which the shootout may finish.

## Notes

- Unknown (`?`) kicks may be chosen in whichever way leads to the earliest possible ending.
- If neither team can secure an unbeatable lead before all kicks are taken, the answer is `10`.

## Example

### Input

```text
1?0???1001
```

### Output

```text
7
```

### Explanation

One possible assignment of the unknown kicks allows the first team to build a lead that the second team can no longer recover after the seventh kick, so the shootout ends immediately.
