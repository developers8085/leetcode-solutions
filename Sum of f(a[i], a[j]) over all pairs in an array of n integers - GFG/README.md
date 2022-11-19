# Sum of f(a[i], a[j]) over all pairs in an array of n integers
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an array <strong>A </strong>of <strong>n</strong> integers, find the&nbsp;sum of <strong>f(a[i], a[j]) </strong>of all pairs (i, j) such that (1 &lt;= i &lt; j &lt;= n).</span></p>

<p><span style="font-size:18px"><strong>f(a[i], a[j]):</strong>&nbsp; &nbsp; &nbsp; &nbsp;<em>if</em>&nbsp;<strong>abs(a[j]-a[i])&nbsp;&gt; 1</strong></span></p>

<p><span style="font-size:18px">&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;f(a[i], a[j]) = a[j] - a[i]</span></p>

<p><span style="font-size:18px">&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;<em>else &nbsp;if</em>&nbsp;<strong>abs(a[j]-a[i])</strong>&nbsp;&lt;= 1</span></p>

<p><span style="font-size:18px">&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;f(a[i], a[j]) = 0&nbsp;</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input :</strong> arr[ ] = {6, 6, 4, 4}
<strong>Output :</strong> -8
<strong>Explanation:</strong>
All pairs are: 
(6 - 6)&nbsp;+ (4 - 6) + (4 - 6) + 
(4 - 6) + (4 - 6) + (4 - 4)&nbsp;= -8
return -8.
</span></pre>

<p><br>
<span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input :</strong> arr[ ] = {1, 2, 3, 1, 3} <strong>
Output:</strong>  4
<strong>Explanation:</strong> All pairs are:
(3-1) + (1-3) + (3-1) + (3-1) = 4
(1-2),(3-2),(1-1),(2-1),(3-3),(3-2) these pairs
will give zero as their absolute difference is &lt;= 1</span>

</pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
This is a function problem. The input is already taken care of by the driver code. You only need to complete the function <strong>sum()</strong> that takes an array <strong>(arr)</strong>, sizeOfArray <strong>(n)</strong>, and return an integer denoting the sum&nbsp;of <strong>f(a[i], a[j])</strong> of all pairs. The driver code takes care of the printing.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N).<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(N).</span></p>

<p><br>
<br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>5</sup><br>
1 ≤ a[i] ≤ 10<sup>7</sup></span></p>
</div>