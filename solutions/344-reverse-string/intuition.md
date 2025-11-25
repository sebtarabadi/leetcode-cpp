# LeetCode 344. Reverse String

## The Problem

Write a function that reverses a string. The input string is given as an array of characters s.

You must do this by modifying the input array in-place with O(1) extra memory.

## The solution

This problem is quite straight forward and can be solved simply with a __Two Pointer__ approach.

The issue is merely a string reversal and whilst you can use built-ins and such to reverse the string with a single pre-existing function, this isn't really needed nor the point of the exercise and we can manually swap each character through a single pass through the array.

The biggest mistake that likely can be made in this problem is a naive approach of just trying to directly swap the left-side of the array with the right-side of the array without a designated _storage variable_ that is used to store the value of the side of the array that gets overritten.

However this can be omitted in C++ by using `std::swap` which will swap the values for us.

## Complexities 

Time Complexity - O(n) - Each element is swapped only once and via a single pass.

Space Complexity - O(1) - Only 3 extra variables are used and all are fixed in size.