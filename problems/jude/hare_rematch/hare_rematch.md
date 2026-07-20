# A Revanche da Lebre

**Source:** JUDE - UFBA

**Author:** Pedro Andrade

## Summary

A programming contest consists of `N` problems. Each problem has a point value and the amount of time required to solve it completely.

The Turtle works during the entire contest, while the Hare sleeps and only starts solving problems during the last `M` minutes. However, the Hare solves problems `X` times faster than the Turtle.

If a problem is not completed, the contestant receives a fraction of its score proportional to the time spent working on it.

Assuming both contestants use the optimal strategy to maximize their total score, determine who wins the contest. Calculated as: (partialTime / questionTime) * questionValue

## Input

The first line contains four integers:

- `N` — number of problems;
- `T` — total contest duration (minutes);
- `M` — minutes remaining when the Hare wakes up;
- `X` — speed multiplier of the Hare.

Each of the next `N` lines contains two integers:

- `P` — point value of the problem;
- `D` — time required for the Turtle to solve the problem completely.

## Output

Print one of the following:

- `LEBRE` if the Hare obtains a higher score;
- `TARTARUGA` if the Turtle obtains a higher score;
- `EMPATE` if both obtain the same score.

## Notes

- Both contestants choose the optimal strategy to maximize their score.
- The Hare solves every problem `X` times faster than the Turtle.
- Partial scores are awarded proportionally to the fraction of the problem that was completed.
- The Turtle has `T` minutes available, while the Hare has only the last `M` minutes of the contest.

## Example

### Input

```text
3 60 15 2
100 20
80 15
60 10
```

### Output

```text
TARTARUGA
```

### Explanation

Although the Hare solves problems faster, it only has the final `15` minutes of the contest to work. Under the optimal strategy for both contestants, the Turtle finishes with the higher total score.
