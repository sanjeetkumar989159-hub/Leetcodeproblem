class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {

        int m = nums1.length;
        int n = nums2.length;

        int arr[] = new int[m + n];

        int i = 0, j = 0, k = 0;

        while(i < m && j < n) {
            if(nums1[i] < nums2[j]) {
                arr[k++] = nums1[i++];
            }
            else {
                arr[k++] = nums2[j++];
            }
        }

        while(i < m) {
            arr[k++] = nums1[i++];
        }

        while(j < n) {
            arr[k++] = nums2[j++];
        }

        int size = m + n;

        if(size % 2 == 1) {
            return arr[size / 2];
        }
        else {
            return (arr[size / 2 - 1] + arr[size / 2]) / 2.0;
        }
    }
}