#include <iostream>

// Function to find the greatest common divisor (GCD) of two numbers
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to find the GCD of an array of numbers
int findGCD(int arr[], int n) {
    int result = arr[0];

    for (int i = 1; i < n; i++) {
        result = gcd(result, arr[i]);

        // If the GCD becomes 1, then there is no need to check further
        if (result == 1) {
            break;
        }
    }

    return result;
}

// Function to count the number of common divisors
int countCommonDivisors(int commonDivisor) {
    int count = 0;

    for (int i = 1; i <= commonDivisor; i++) {
        if (commonDivisor % i == 0) {
            count++;
        }
    }

    return count;
}

int main() {
    int n;
    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    int arr[n];
    std::cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    // Find the GCD of the array elements
    int commonDivisor = findGCD(arr, n);

    // Count the number of common divisors and print the result
    int commonDivisorCount = countCommonDivisors(commonDivisor);
    std::cout << "The number of common divisors is: " << commonDivisorCount << std::endl;

    return 0;
}
