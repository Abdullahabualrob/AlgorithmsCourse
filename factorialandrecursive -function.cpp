#include <iostream>
#include <chrono>  

using namespace std;

// Iterative function to calculate factorial
long long iterativeFactorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *=i;
    }
    return result;
}

// Recursive function to calculate factorial
long long recursiveFactorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * recursiveFactorial(n - 1);
}

int main() {
    int n;
    
    // Test with small values
    for (n = 1; n <= 20; n++) {
        // Measure time for Iterative approach
        auto start_iter = chrono::high_resolution_clock::now();
        long long iter_result = iterativeFactorial(n);
        auto end_iter = chrono::high_resolution_clock::now();
        chrono::duration<double> duration_iter = end_iter - start_iter;
        
        // Measure time for Recursive approach
        auto start_rec = chrono::high_resolution_clock::now();
        long long rec_result = recursiveFactorial(n);
        auto end_rec = chrono::high_resolution_clock::now();
        chrono::duration<double> duration_rec = end_rec - start_rec;
        
        // Output the results
        cout << "n = " << n << endl;
        cout << "Iterative Result: " << iter_result << " | Time: " << duration_iter.count() << " seconds" << endl;
        cout << "Recursive Result: " << rec_result << " | Time: " << duration_rec.count() << " seconds" << endl;
        
        cout << "-------------------------------------------------" << endl;
    }