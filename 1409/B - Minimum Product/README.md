<h2><a href="https://codeforces.com/contest/1409/problem/B" target="_blank" rel="noopener noreferrer">1409B — Minimum Product</a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1409B](https://codeforces.com/contest/1409/problem/B) |

## Topics
`brute force` `greedy` `math`

---

## Problem Statement

<div class="header"><div class="title">B. Minimum Product</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given four integers $$$a$$$, $$$b$$$, $$$x$$$ and $$$y$$$. Initially, $$$a \ge x$$$ and $$$b \ge y$$$. You can do the following operation <span class="tex-font-style-bf">no more than</span> $$$n$$$ times:</p><ul> <li> Choose either $$$a$$$ or $$$b$$$ and decrease it by one. However, as a result of this operation, value of $$$a$$$ cannot become less than $$$x$$$, and value of $$$b$$$ cannot become less than $$$y$$$. </li></ul><p>Your task is to find the <span class="tex-font-style-bf">minimum</span> possible product of $$$a$$$ and $$$b$$$ ($$$a \cdot b$$$) you can achieve by applying the given operation no more than $$$n$$$ times.</p><p>You have to answer $$$t$$$ independent test cases.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains one integer $$$t$$$ ($$$1 \le t \le 2 \cdot 10^4$$$) — the number of test cases. Then $$$t$$$ test cases follow.</p><p>The only line of the test case contains five integers $$$a$$$, $$$b$$$, $$$x$$$, $$$y$$$ and $$$n$$$ ($$$1 \le a, b, x, y, n \le 10^9$$$). Additional constraint on the input: $$$a \ge x$$$ and $$$b \ge y$$$ always holds.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print one integer: the <span class="tex-font-style-bf">minimum</span> possible product of $$$a$$$ and $$$b$$$ ($$$a \cdot b$$$) you can achieve by applying the given operation no more than $$$n$$$ times.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00943449529904994" id="id009394414387271843" class="input-output-copier">Copy</div></div><pre id="id00943449529904994">7
10 10 8 5 3
12 8 8 7 2
12343 43 4543 39 123212
1000000000 1000000000 1 1 1
1000000000 1000000000 1 1 1000000000
10 11 2 1 5
10 11 9 1 10
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008829365870955488" id="id0018299421606987132" class="input-output-copier">Copy</div></div><pre id="id008829365870955488">70
77
177177
999999999000000000
999999999
55
10
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case of the example, you need to decrease $$$b$$$ three times and obtain $$$10 \cdot 7 = 70$$$.</p><p>In the second test case of the example, you need to decrease $$$a$$$ one time, $$$b$$$ one time and obtain $$$11 \cdot 7 = 77$$$.</p><p>In the sixth test case of the example, you need to decrease $$$a$$$ five times and obtain $$$5 \cdot 11 = 55$$$.</p><p>In the seventh test case of the example, you need to decrease $$$b$$$ ten times and obtain $$$10 \cdot 1 = 10$$$.</p></div>