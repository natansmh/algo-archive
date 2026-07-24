# The Fantastic Whey Factory

**Source:** JUDE - UFBA

## Summary

Cariri has `n` grams of casein and `m` different flavor essences available to produce whey.

For each flavored whey, there is a limited amount of flavor essence available. Producing one unit requires a specific amount of casein and flavor essence, and yields a certain profit.

Cariri may also produce **natural whey**, which only requires casein and provides a different profit per unit.

He may produce any combination of flavored and natural wheys until he runs out of resources. Any leftover materials are discarded.

Determine the maximum profit (in **BIRLS**) that Cariri can obtain.

## Input

The first line contains four integers:

- `n` — grams of casein available;
- `m` — number of flavor essences;
- `c₀` — grams of casein required to produce one natural whey;
- `d₀` — profit of one natural whey.

Each of the next `m` lines contains four integers:

- `aᵢ` — grams of flavor essence `i` available;
- `bᵢ` — grams of flavor essence required per flavored whey;
- `cᵢ` — grams of casein required per flavored whey;
- `dᵢ` — profit of one flavored whey of type `i`.

## Output

Print a single integer representing the maximum number of **BIRLS** Cariri can earn.

## Notes

- The amount of each flavor essence is limited.
- Natural whey may be produced any number of times while enough casein remains.
- Flavored wheys may only be produced while both casein and the corresponding flavor essence are available.
- Any unused resources are discarded after production.
- `1 ≤ n ≤ 1000`.
- `1 ≤ m ≤ 10`.

## Example

### Input

```text
10 2 13 100
20 1 3 10
20 1 2 6
```

### Output

```text
32
```

### Explanation

The optimal production plan is the one that maximizes the total profit while respecting the available amounts of casein and flavor essences. Producing only the most valuable whey is not always the best strategy, since different recipes consume different resources.
