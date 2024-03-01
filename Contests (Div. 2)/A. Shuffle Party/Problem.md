<h1 align="center">
  Shuffle Party
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

You are given an array $a_1,a_2,…,a_n$. Initially, $a_i=i$ for each $1≤i≤n$ .

The operation **$swap(k)$** for an integer $k≥2$ is defined as follows:

Let $d$ be the largest divisor of $k$ which is not equal to $k$ itself. Then swap the elements $a_d$ and $a_k$ .
Suppose you perform **$swap(i)$** for each $i=2,3,…,n$ in this exact order. Find the position of **$1$** in the resulting array. In other words, find such $j$ that $a_j=1$ after performing these operations.

An integer $x$ is a divisor of $y$ if there exists an integer $z$ such that $y=x⋅z$ .

### Input

Each test contains multiple test cases. The first line contains the number of test cases $t$ ($1≤t≤10^4$). The description of the test cases follows.

The only line of each test case contains one integer $n$ ($1≤n≤10^9$) — the length of the array $a$.

### Output

For each test case, output the position of **$1$** in the resulting array.

#### Examples

```
    Input
        >> 4
        >> 1
        >> 4
        >> 5
        >> 120240229

    Output
        >> 1
        >> 4
        >> 4
        >> 67108864
```

#### Note

In the first test case, the array is $[1]$ and there are no operations performed.

In the second test case, $a$ changes as follows:

- Initially, $a$ is $[1,2,3,4]$.
- After performing **$swap(2)$**, a changes to $[(2),(1),3,4]$ (the elements being swapped are underlined).
- After performing **$swap(3)$**, a changes to $[(3),1,(2),4]$.
- After performing **$swap(4)$**, a changes to $[3,(4),2,(1)]$.

Finally, the element **$1$** lies on index $4$ (that is, $a_4=1$). Thus, the answer is $4$
.