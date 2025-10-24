# AutSys_Labs_Intro_cpp
## Assignment 1 - C++ Basics

The goal of this exercise is to update, refresh and test your C++ coding skills and to learn how to compile and run a program under Linux. The assignment is fairly simple and you should be able to solve it in under 30 minutes.

#### Table of contents

1. [Installing build-essential](#introduction)
2. [Exercise](#exercise)

### 1 Installing build-essential <a name="introduction"></a>

We will first need to install build-essentials from the terminal to later compile our code. Please run:
```CPP
sudo apt-get install build-essential
```

### 2 Exercise <a name="exercise"></a>

In this exercise we will implement the class RandomVector.

The class RandomVector, defined in the header file random\_vector.h, abstracts a vector of doubles. You are required to implement the following methods (only edit the file random\_vector.cpp):
- RandomVector(int size, double max\_val = 1) (constructor): initialize the vector *vect* of doubles of size *size* with random values between 0 and max\_val (default value 1)
- double mean() returns the mean of the values in random vector
- double max() returns the max of the values in random vector
- double min() returns the min of the values in random vector
- void print() prints all the values in the random vector to the terminal
- void printHistogram(int bins) computes the histogram of the values using bins number of bins between min() and max() and print the histogram itself (see the example below).

To to so complete all the TODOs in the file random\_vector.cpp. When you are done compile the application by running
```CPP
g++ -std=c++11 -Wall -pedantic -o random_vector main.cpp random_vector.cpp
```

You can now execute your program by running
```CPP
./random_vector
```
in your terminal (if you get an error message it might be that you have to run ```chmod 755 random_vector``` first).

If you complete the exercise correctly you should see something like
```CPP
$ ./random_vector
0.458724 0.779985 0.212415 0.0667949 0.622538 0.999018 0.489585 0.460587 0.0795612 0.185496 0.629162 0.328032 0.242169 0.139671 0.453804 0.083038 0.619352 0.454482 0.477426 0.0904966
Mean: 0.393617
Min: 0.0667949
Max: 0.999018
Histogram:
***     ***
***     ***
***     ***
***     ***
***     ***
***     ***
***     *** ***
*** *** *** *** ***
```

Commit and push your final solution before the end of the deadline.
