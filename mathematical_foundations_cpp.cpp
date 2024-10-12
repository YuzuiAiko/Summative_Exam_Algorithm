# -*- coding: utf-8 -*-
"""Mathematical_Foundations.cpp

Automatically generated by Colab.

Original file is located at
    https://colab.research.google.com/drive/1R_Qt4dS1xnOTagYKMqozvlgO_-lXbBlW
"""

# Commented out IPython magic to ensure Python compatibility.
# %%writefile calculate_distance.cpp
# #include <iostream>
# #include <vector>
# #include <cmath> // For sqrt function
# using namespace std;
# 
# // Function to calculate distance between two points
# double calculateDistance(pair<double, double> p1, pair<double, double> p2) {
#     return sqrt(pow(p2.first - p1.first, 2) + pow(p2.second - p1.second, 2));
# }
# 
# // Function to calculate the sum of the first N natural numbers
# int sumOfNaturalNumbers(int N) {
#     return (N * (N + 1)) / 2; // Using summation formula
# }
# 
# int main() {
#     int N;
#     cout << "Enter the number of points: ";
#     cin >> N;
# 
#     vector<pair<double, double>> points(N);
# 
#     // Input points
#     cout << "Enter the coordinates of the points (x y):" << endl;
#     for (int i = 0; i < N; ++i) {
#         cin >> points[i].first >> points[i].second;
#     }
# 
#     // Calculate total distance
#     double totalDistance = 0;
#     for (int i = 0; i < N - 1; ++i) {
#         totalDistance += calculateDistance(points[i], points[i + 1]);
#     }
# 
#     // Output total distance
#     cout << "Total distance: " << totalDistance << endl;
# 
#     // Output sum of the first N natural numbers
#     cout << "Sum of the first " << N << " natural numbers: " << sumOfNaturalNumbers(N) << endl;
# 
#     return 0;
# }
#

!g++ calculate_distance.cpp -o calculate_distance

!./calculate_distance

"""#**Mathematical Foundations Analysis**

Analysis of the Distance Calculation:
The program solves two related problems: first, calculating the total distance traveled between multiple delivery points in 2D space, and second, calculating the sum of the first N natural numbers using a mathematical formula.

1. **Distance Calculation:**

> The distance between two points in 2D space is calculated using the Euclidean distance formula:



`d = | (x2 - x1)^2 + (y2 - y1)^2`


> This formula works by finding the horizontal and vertical differences between two points and then applying the Pythagorean Theorem to calculate the straight-line distance. The program loops through each pair of consecutive points in the list and sums up these distances to get the total distance traveled.

> The time complexity for this part of the program is O(N), where N is the number of points. This is because the program only needs to compute the distance between each pair of consecutive points once, and it doesn’t involve any nested loops or complex operations. Each point is processed in a single pass, so even if you had a large number of delivery points, the time taken would grow linearly, making this approach efficient.


2. **Sum of the First N Natural Numbers:**

The program uses a well-known mathematical formula to calculate the sum of the first N natural numbers:

`Sum = N(N+1) / 2`

This formula is an efficient way to compute the sum of numbers without looping through each number. Instead of adding each number individually, the formula calculates the result directly in constant time, meaning that no matter how large N is, this part of the program always runs in O(1) time. This makes it extremely efficient compared to iterating through each number.

**Overall Performance**





> **Distance Calculation:** O(N) – the program computes the distance between consecutive points in a linear pass through the list of delivery points.
Sum Calculation: O(1) – the sum of the first N numbers is computed using a formula in constant time.


**Conclusion**

> The distance calculation program is highly efficient for both tasks it handles. The distance calculation grows linearly with the number of points, which is optimal for this type of problem. On the other hand, the sum of natural numbers is calculated in constant time, further improving the overall performance. This approach ensures that even for large numbers of delivery points, the program remains scalable and performs well without excessive computational overhead.






"""