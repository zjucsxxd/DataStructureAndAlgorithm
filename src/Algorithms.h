#pragma once

namespace sl {

/*
Contains some useful algorithms.

For usage, see function test().
*/
class Algorithms {
public:
    /*
    Test the function of the class.
    */
    static void test();

    /*
    Swap the value of two elements.

    @param a the first element
    @param b the second element
    */
    template <typename T>
    static void swap(T &a, T &b) {
        T tmp = a;
        a = b;
        b = tmp;
    }

    /*
    Binary search
    1. Standard
    2. Find first appear position
    3. Find last appear position
    
    Precondition: array must be ordered.

    @param a the array to find
    @param n the size of the array
    @param x the element to find
    @return the position of x in array a.
            If x doesn't exist, return -1
    */
    static int binarySearch(const int a[], const int n, const int x);
    static void testBinarySearch();

    /*
    Calculate the next permutation of the current sequence.

    @param a the array stores the sequence
    @param n the size of the array
    @return whether next permutation exists
    */
    static bool nextPermutation(int a[], const int n);
    static void testPermutation();

    /*
    Print the combinations(C(n, k)) of and array.

    @param a the array stores the sequecne
    @param n the size of the array
    @param k the k numbers to select
    */
    static void printCombinations(const int a[], const int n, const int k);
    static void testCombination();

private:

};

}
