#include <iostream>

int max(const int& a, const int& b)
{
        int maximum = 0;
        if (a > b) {
                maximum = a;
        } else {
                maximum = b;
        }
        return maximum;
}

void max_example()
{
        int x = 9;
        int y = 7;
        int m = max(x, y);
        std::cout << m << std::endl;
}

void swap(int& num1, int& num2)
{
        int temp = num1;
        num1 = num2;
        num2 = temp;
}

void order(int& num1, int& num2)
{
        if (num1 >= num2) {
                return;
        }
        swap(num1, num2);
}

void order_example()
{
        int x = 7;
        int y = 9;
        order(x, y);
        std::cout << "x = " << x << std::endl;
        std::cout << "y = " << y << std::endl;
}

void max2(const int* a, const int* b, int*& m, int size)
{
        std::cout << "&m = " << &m << std::endl;
        std::cout << "m = " << m << std::endl;
        if (a == 0 || b == 0) {
                return;
        }
        if (m == 0) {
                std::cout << "allocating is done" << std::endl;
                m = new int[size];
        }
        for (int i = 0; i < size; ++i) {
                if (a[i] > b[i]) {
                        m[i] = a[i];
                } else {
                        m[i] = b[i];
                }
        }
        std::cout << "After &m = " << &m << std::endl;
        std::cout << "After m = " << m << std::endl;
}

void pointer_example()
{
        int* x = new int[3];
        int* y = new int[3];
        int* r = 0; //new int[3];
        x[0] = 15;
        x[1] = 8;
        x[2] = 9;

        y[0] = 7;
        y[1] = 19;
        y[2] = 20;
        std::cout << "&r = " << &r << std::endl;
        std::cout << "r = " << r << std::endl;
        max2(x, y, r, 3);
        if (x != 0) {
                std::cout << "x = [" << x[0] << ", " << x[1] << ", " << x[2]
                        << "]" << std::endl;
        } else {
                std::cout << "x is NULL" << std::endl;
        }
        if (y != 0) {
                std::cout << "y = [" << y[0] << ", " << y[1] << ", " << y[2]
                        << "]" << std::endl;
        } else {
                std::cout << "y is NULL" << std::endl;
        }
        if (r != 0) {
                std::cout << "r = [" << r[0] << ", " << r[1] << ", " << r[2]
                        << "]" << std::endl;
        } else {
                std::cout << "r is NULL" << std::endl;
        }
}

void malloc_example()
{
        void* v = malloc(24);
        char* c = (char*)v;
        int* x = (int*)v;
        void* d = x;
}

void printf_example()
{
        printf("Hello World\n");
}

int main()
{
        // max_example();
        // order_example();
        //pointer_example();
        //malloc_example();
        printf_example();
        return 0;
}

/*
void print(int* p, int size)
{
        if (p != 0) {
                for (int i = 0; i < size; ++i) {
                        std::cout << "Address of " << i << " element is "
                                << (long int)&p[i] << " value is "
                                << p[i] << std::endl;
                }
        }
}

void allocate(int*& b, int size)
{
        b = new int[size];
        std::cout << "In the function -- value of b is " << b << std::endl;
        for (int i = 0; i < size; ++i) {
                b[i] = 5;
        }
}

int main()
{
        int y = 63;
        // Question: uninitialized elements will be initialized with 0?
        int a[5] = {10, 11, 12, 13, 14};
        for (int i = 0; i < 5; ++i) {
                std::cout << "Address of a[" << i << "] is "
                        << (long int)&a[i] << std::endl;
        }
        std::cout << "Enter size of the array" << std::endl;
        int size = 0;
        std::cin >> size;
        if (size <= 0) {
                std::cout << "Not valid size for array" << std::endl;
                return EXIT_FAILURE;
        }

        int* p = 0;
        std::cout << "Before alloc -- value of p is " << p << std::endl;
        allocate(p, size);
        std::cout << "After alloc -- value of p is " << p << std::endl;
        print(p, size);
        delete[] p;
        p = 0;

        float* c = new float(3);
        std::cout << "Value of c is " << (long int)c
                << " value of *c is " << *c << std::endl;
        delete c;
        std::cout << "After the deallocation !!!!"
                << " Value of c is " << (long int)c
                << " value of *c is " << *c << std::endl; // dereferencing is not valid
        return EXIT_SUCCESS;

        // std::cout << "Before swap x = " << x << " y = " << y << std::endl;

        // std::cout << "After swap x = " << x << " y = " << y << std::endl;
        // const int& z = x;
        int x = 0;
        int y = 0;
        std::cout << "Enter first value" << std::endl;
        std::cin >> x;
        if (std::cin.fail()) {
                std::cout << "First is not a number" << std::endl;
                return EXIT_FAILURE;
        }
        std::cout << "Enter second value" << std::endl;
        std::cin >> y;
        if (std::cin.fail()) {
                std::cout << "Second is not a number" << std::endl;
                return EXIT_FAILURE;
        }
        int m = max(x, y);
        return EXIT_SUCCESS;
}
*/
