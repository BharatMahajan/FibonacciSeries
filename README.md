# FibonacciSeries
The Fibonacci Sequence is a series of numbers named after Italian mathematician, known as Fibonacci. It is simply the series of numbers which starts from 0 and 1 and then continued by the addition of the preceding two numbers. In this article, you will learn how to write a Python program to implement the Fibonacci series using multiple methods. Below pointers will be discussed:

What is Fibonacci series?
Python Program to write Fibonacci Sequence
Using Loop
Using Recursion

Let’s begin.

What is Fibonacci Series?
Fibonacci series is a series of numbers formed by the addition of the preceeding two numbers in the series.

Example of Fibonacci Series: 0,1,1,2,3,5

In the above example, 0 and 1 are the first two terms of the series. These two terms are printed directly. The third term is calculated by adding the first two terms. In this case 0 and 1. So, we get 0+1=1. Hence 1 is printed as the third term. The next term is generated by using the second and third term and not using the first term. It is done until the number of terms you want or requested by the user. In the above example, we have used five terms.
=======
Fibonacci Series

Code in Python:

def fibonacci(n):
    fib_series = [0, 1]
    
    if n <= 1:
        return fib_series[:n + 1]
    
    while len(fib_series) <= n:
        next_num = fib_series[-1] + fib_series[-2]
        fib_series.append(next_num)
    
    return fib_series

# Example usage:
n = 10  # You can change this to generate a different number of Fibonacci numbers
result = fibonacci(n)
print(result)

