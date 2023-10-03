# FibonacciSeries
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

