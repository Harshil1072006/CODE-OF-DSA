// ============================================================================
// Personal AI Research Project - Code Review & Refactoring Examples
// Jan 2025 - Present
// ============================================================================
// This project demonstrates AI-assisted code validation, legacy refactoring,
// and bug identification while enforcing modern C++ best practices.

#include <iostream>
#include <vector>
#include <memory>
#include <algorithm>
#include <stdexcept>

// ============================================================================
// LEGACY CODE EXAMPLE - Issues identified and refactored
// ============================================================================

// BEFORE: Legacy implementation with memory management issues
/*
class DataProcessor {
public:
    DataProcessor() {
        data = new int[100];
        size = 0;
    }
    ~DataProcessor() {
        delete[] data;
    }
    void addValue(int val) {
        if (size < 100) {
            data[size++] = val;
        }
    }
private:
    int* data;
    int size;
};
*/

// AFTER: Refactored with modern C++ practices
class DataProcessor {
public:
    DataProcessor() = default;
    
    void addValue(int val) {
        if (data.size() < capacity) {
            data.push_back(val);
        } else {
            throw std::overflow_error("DataProcessor capacity exceeded");
        }
    }
    
    size_t getSize() const { return data.size(); }
    
private:
    static constexpr size_t capacity = 100;
    std::vector<int> data;
};

// ============================================================================
// BUG IDENTIFICATION & FIX EXAMPLES
// ============================================================================

// Complex bug: Integer overflow in recursive calculation
class MathOperations {
public:
    // ISSUE: Potential integer overflow for large inputs
    // FIX: Added overflow detection and better handling
    uint64_t safeFactorial(int n) {
        if (n < 0) {
            throw std::invalid_argument("Factorial of negative number");
        }
        if (n > 20) {
            throw std::overflow_error("Factorial overflow risk for n > 20");
        }
        
        return (n <= 1) ? 1 : n * safeFactorial(n - 1);
    }
    
    // ISSUE: Undefined behavior with uninitialized pointer
    // FIX: Using smart pointers and proper initialization
    std::unique_ptr<int[]> allocateBuffer(size_t size) {
        return std::make_unique<int[]>(size);
    }
};

// ============================================================================
// MODERN C++ BEST PRACTICES ENFORCED
// ============================================================================

class ResourceManager {
public:
    // RAII principle: Resource Acquisition Is Initialization
    explicit ResourceManager(size_t capacity) : buffer_(std::make_unique<char[]>(capacity)),
                                                 capacity_(capacity) {
        if (capacity == 0) {
            throw std::invalid_argument("Capacity must be positive");
        }
    }
    
    // Deleted copy operations to prevent resource duplication
    ResourceManager(const ResourceManager&) = delete;
    ResourceManager& operator=(const ResourceManager&) = delete;
    
    // Move semantics for efficient transfer
    ResourceManager(ResourceManager&&) noexcept = default;
    ResourceManager& operator=(ResourceManager&&) noexcept = default;
    
    void write(const char* data, size_t size) {
        if (size > capacity_) {
            throw std::out_of_range("Write size exceeds capacity");
        }
        std::copy(data, data + size, buffer_.get());
    }
    
    const char* read() const { return buffer_.get(); }
    size_t capacity() const { return capacity_; }
    
private:
    std::unique_ptr<char[]> buffer_;
    size_t capacity_;
};

// ============================================================================
// AI-ASSISTED PERFORMANCE OPTIMIZATION
// ============================================================================

class OptimizedSearch {
public:
    // Refactored for better cache locality and performance
    bool binarySearch(const std::vector<int>& arr, int target) {
        auto it = std::lower_bound(arr.begin(), arr.end(), target);
        return it != arr.end() && *it == target;
    }
    
    // Prompt-engineered to identify algorithmic inefficiency
    // BEFORE: O(n²) nested loop search
    // AFTER: O(n log n) using standard algorithms
    std::vector<int> findDuplicates(const std::vector<int>& arr) {
        std::vector<int> sorted_arr = arr;
        std::sort(sorted_arr.begin(), sorted_arr.end());
        
        std::vector<int> duplicates;
        for (size_t i = 1; i < sorted_arr.size(); ++i) {
            if (sorted_arr[i] == sorted_arr[i-1] && 
                (duplicates.empty() || duplicates.back() != sorted_arr[i])) {
                duplicates.push_back(sorted_arr[i]);
            }
        }
        return duplicates;
    }
};

// ============================================================================
// VALIDATION & TESTING HELPER
// ============================================================================

class CodeValidator {
public:
    static void validateDataProcessor() {
        DataProcessor processor;
        processor.addValue(42);
        processor.addValue(100);
        
        if (processor.getSize() != 2) {
            throw std::runtime_error("DataProcessor validation failed");
        }
    }
    
    static void validateResourceManager() {
        ResourceManager manager(256);
        const char* test_data = "test";
        
        manager.write(test_data, 4);
        if (std::string(manager.read()) != "test") {
            throw std::runtime_error("ResourceManager validation failed");
        }
    }
    
    static void runAllValidations() {
        try {
            validateDataProcessor();
            validateResourceManager();
            std::cout << "✓ All validations passed\n";
        } catch (const std::exception& e) {
            std::cerr << "✗ Validation error: " << e.what() << "\n";
        }
    }
};

// ============================================================================
// MAIN - DEMONSTRATION
// ============================================================================

int main() {
    std::cout << "Personal AI Research Project - Code Review Examples\n";
    std::cout << "=====================================================\n\n";
    
    // Demonstrate refactored code
    try {
        DataProcessor processor;
        for (int i = 0; i < 5; ++i) {
            processor.addValue(i * 10);
        }
        std::cout << "Processed " << processor.getSize() << " values\n";
        
        // Demonstrate safe operations
        MathOperations math;
        std::cout << "5! = " << math.safeFactorial(5) << "\n";
        
        // Run all validations
        CodeValidator::runAllValidations();
        
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << "\n";
        return 1;
    }
    
    return 0;
}