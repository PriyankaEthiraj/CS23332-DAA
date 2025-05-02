/*Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.*/

#include <stdio.h>

int count(int nums[], int left, int right, int candidate) {
    int c = 0;
    for (int i = left; i <= right; i++) {
        if (nums[i] == candidate)
            c++;
    }
    return c;
}

int majority(int nums[], int left, int right) {
    if (left == right)
        return nums[left];

    int mid = (left + right) / 2;
    int leftMajor = majority(nums, left, mid);
    int rightMajor = majority(nums, mid + 1, right);

    if (leftMajor == rightMajor)
        return leftMajor;

    int leftCount = count(nums, left, right, leftMajor);
    int rightCount = count(nums, left, right, rightMajor);

    return (leftCount > rightCount) ? leftMajor : rightMajor;
}

int majorityElement(int nums[], int size) {
    return majority(nums, 0, size - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    printf("%d\n", majorityElement(nums, n));
    return 0;
}
