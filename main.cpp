#include <iostream>

// INPUT Format <every kth number, between 0 & 2^B)
// ie <6, 12>
//     6 = 2 bits
//    12 = 2 bits
//    .. = .. bits
//    4096 (2^12) = x bits

#define MAX 1000
#define MAXBITS 64

unsigned int K, B;

int Multiples[MAX];
int Num_mult = 0;

int Ones[MAXBITS];
int Num_ones_bits;

int get_range(int exponent) {
    return (2 << exponent - 1) - 1;
}


void get_multiples(int k, int r) {
    for (int i = 0; i < r; i++) {
        if ((k * i) <= r) {
            int result = k*i;
            Multiples[i] = result;
            Num_mult++;

            while (result != 0) {
                if ((result & 1) == 1) {
                    Num_ones_bits++;
                }
                result = result >> 1;
            }
            Ones[i] = Num_ones_bits;
            Num_ones_bits = 0;
        }
    }
}

void print_out() {
    std::cout << "\nHere are the multiples and number of bits..\n";
    for (int i = 1; i < Num_mult; i++) {
        std::cout << "\n" << Multiples[i] << " : \"" << Ones[i] << "\" number of ones bits.\n";
    }
}

void read_in() {
    fscanf(stdin, "%d%d", &K, &B);
    std::cout << "\tOriginal numbers as entered:\n";
    std::cout << "\tk: " << K << " b: " << B << "\n";
}

int main() {
    read_in();
    get_multiples(K, get_range(B));
    print_out();

    return 0;
}
