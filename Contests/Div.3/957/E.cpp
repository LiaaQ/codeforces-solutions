#include<iostream>
#include<math.h>
using namespace std;

long long ceilLogBase(double number, double base) {
    return ceil(log(number) / log(base));
}

long long integerPower(long long base, long long exp) {
    if (exp == 0) return 1;
    if (exp == 1) return base;

    long long halfPower = integerPower(base, exp / 2);
    if (exp % 2 == 0) return halfPower * halfPower;
    return base * halfPower * halfPower;
}

int main()
{
    int t;
    cin >> t;

    while(t--) {
        long long l, r;
        cin >> l >> r;

        long long operations = ceilLogBase(l, 3);  // How many times we have to divide l by 3 to gain 0
        if (l % integerPower(3, operations) == 0) operations++; // if l is divisible by it, we would end up with 1 and not 0
        long long result = operations;

        long long transformed_value = (l + 1) * integerPower(3, operations); // While we were dividing l, we were increasing l+1 by 3 every time
        operations = ceilLogBase(transformed_value, 3);
        if (transformed_value % integerPower(3, operations) == 0) operations++;
        result += operations;

        long long current_value = l + 2;
        operations = ceilLogBase(l + 2, 3);
        if (current_value % integerPower(3, operations) == 0) operations++;
        long long next_power_of_three = integerPower(3, operations); // every time we reach another power of 3, the operations will increase by 1

        while (current_value <= r) {
            long long block_end = min(r, next_power_of_three - 1); // last number before the next power of three
            result += operations * (block_end - current_value + 1);

            current_value = block_end + 1;
            if (current_value == next_power_of_three) {
                operations++;
                next_power_of_three *= 3;
            }
        }

        cout << result << endl;
    }

    return 0;
}