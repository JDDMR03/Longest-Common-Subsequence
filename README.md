# Longest Common Subsequence

<p align="justify">If two or more than two sequences have same elements in same order these elements as a combine 
are called the common subsequence. These sequences may have more than one common 
subsequence and the longest subsequence among these sub-sequences is called longest common subsequence.

The longest common subsequence (LCS) is a concept applicable to any type of sequences and 
not only associated with strings but strings are used almost all the time to explain the longest common subsequence.

Longest common subsequence between two sequences can be found in O(m &times; n) 
polynomial time complexity and requires O(m &times; n) space complexity with dynamic programming approach.
</p>


## Tutorial Document

<p align="justify">Tutorial document 
<a href="https://github.com/vikasawadhiya/Longest-Common-Subsequence/blob/main/LongestCommonSubsequence.pdf">LongestCommonSubsequence.pdf</a> 
explains the longest common subsequence in detail. Document first introduce the longest common subsequence (LCS) then 
explains logic of the dynamic programming approach to find the LCS among two strings and 
compares it with naïve approach and explains how dynamic programming approach is efficient 
and practical approach for real world problems. It then discusses table creation of order m × n 
which is crucial step and then traversal of the table in bottom-up approach to finally find the LCS.

Tutorial document uses a lot of pictorial representation.
</p>

## Usage

<p align="justify">This implementation can be used to find the LCS among the two strings. LCS can be found by calling a function as follows,</p>

```cpp
std::string lcsStr = lcs::subsequence("abdabacfgih", "adicabafgzh");
```

## Example

If the strings are str1 = `abdabacfgih` and str2 = `adicabafgzh` then LCS = `adabafgh` as 
highlighted by bold boundary cells in figure below,

<p align="center">
<img src="https://github.com/vikasawadhiya/Longest-Common-Subsequence/blob/main/LCSImage.png" alt="LCS of two strings.">
</p>

## License

The code is licenced under the [MIT License](https://github.com/vikasawadhiya/Longest-Common-Subsequence/blob/main/LICENSE).</br>
The tutorial document [LongestCommonSubsequence.pdf](https://github.com/vikasawadhiya/Longest-Common-Subsequence/blob/main/LongestCommonSubsequence.pdf) and 
[LCMImage.png are](https://github.com/vikasawadhiya/Longest-Common-Subsequence/blob/main/LCSImage.png) 
licensed under the [CC-BY 4.0](https://creativecommons.org/licenses/by/4.0/).
