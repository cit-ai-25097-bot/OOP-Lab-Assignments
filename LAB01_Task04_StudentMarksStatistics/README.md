LAB-01 – Task 04: Student Marks Statistics

Description

This program dynamically allocates an integer array for the marks of all students. It rejects negative marks and calculates the minimum, maximum, average, and median.


Functions


findMin – finds the smallest mark.

findMax – finds the largest mark.

computeAverage – calculates the arithmetic mean.

computeMedian – sorts a copy of the marks and finds the middle value (or the average of the two middle values).


Implementation note: The assignment lists int return types for average and median. This solution uses double for those two functions so fractional results are not lost, especially for an even number of marks.


Compile and run

g++ main.cpp -o marks_statistics
./marks_statistics

The dynamically allocated marks array is released with delete[].

