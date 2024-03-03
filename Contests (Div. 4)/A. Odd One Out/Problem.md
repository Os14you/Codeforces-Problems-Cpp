<h1 align="center">
  Odd One Out
</h1>
<p align="center">
  time limit per test : 1 second
</p>
<p align="center">
  memory limit per test : 256 megabytes

</p>
<p align="center">
input : standard input
</p>
<p align="center">
  output : standard output
</p>

You are given three digits $a, b, c$. Two of them are equal, but the third one is different from the other two.

Find the value that occurs exactly once

### Input

The first line contains a single integer $t$ ($1≤t≤270$) — the number of test cases.

The only line of each test case contains three digits $a, b, c$ ($0≤a, b, c≤9$). Two of the digits are equal, but the third one is different from the other two.

### Output

For each test case, output the value that occurs exactly once.

#### Examples

```
    Input
        >> 10
        >> 1 2 2
        >> 4 3 4
        >> 5 5 6
        >> 7 8 8
        >> 9 0 9
        >> 3 6 3
        >> 2 8 2
        >> 5 7 7
        >> 7 7 5
        >> 5 7 5
    Output
        >> 1
        >> 3
        >> 6
        >> 7
        >> 0
        >> 6
        >> 8
        >> 5
        >> 5
        >> 7
```