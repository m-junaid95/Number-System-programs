// 6.3 Advanced Placement Questions on Functions | C++ Placement Course by apna college yt channel
#include <bits/stdc++.h>
using namespace std;

// 1.  Sum of first n natural numbers

int sum(int n)
{
    int ans = 0;
    for (int i = 1; i <= n; i++)
        ans += i;
    return ans;
}

int main()
{
    int n;
    cout << "Enter number" << endl;
    cin >> n;
    cout << sum(n) << endl;

    return 0;
}

// 2.  Check Pythagorean Triplet

// bool check(int x, int y, int z)
// {
//     int a = max(x, max(y, z));
//     int b, c;
//     if (a == x)
//     {
//         b = y;
//         c = z;
//     }
//     else if (a == y)
//     {
//         b = x;
//         c = z;
//     }
//     else
//     {
//         b = x;
//         c = y;
//     }

//     if (a * a == b * b + c * c)
//         return true;
//     return false;
// }

// int main()
// {
//     int x, y, z;
//     cout << "Enter three numbers" << endl;
//     cin >> x >> y >> z;
//     if (check(x, y, z))
//     {
//         cout << "Pythagorean Triplet" << endl;
//     }
//     else
//     {
//         cout << " NOT a Pythagorean Triplet" << endl;
//     }

//     return 0;
// }

// 3. Binary TO Decimal

// int binaryToDecimal(int n)
// {
//     int ans = 0;
//     int x = 1;
//     while (n > 0)
//     {
//         int y = n % 10;
//         ans += x * y;
//         x *= 2;
//         n /= 10;
//     }
//     return ans;
// }

// int main()
// {
//     int n;
//     cout << "Enter number" << endl;
//     cin >> n;
//     cout << binaryToDecimal(n) << endl;
//     return 0;
// }

// 4. Octal TO Decimal

// int octalToDecimal(int n)
// {
//     int ans = 0;
//     int x = 1;
//     while (n > 0)
//     {
//         int y = n % 10;
//         ans += x * y;
//         x *= 8;
//         n /= 10;
//     }
//     return ans;
// }

// int main()
// {
//     int n;
//     cout << "Enter number" << endl;
//     cin >> n;
//     cout << octalToDecimal(n) << endl;
//     return 0;
// }

// 5. Decimal To Binary
// void decimalToBinary(int x)
// {
//     int result[32], j;
//     int i = 0;
//     while (x > 0)
//     {
//         result[i] = x % 2;
//         x = x / 2;
//         i++;
//     }
//     for (j = i - 1; j >= 0; j--)
//     {
//         cout << result[j];
//     }
// }
// int main()
// {
//     int n;
//     cout << "Enter Number"<<endl;
//     cin >> n;
//     decimalToBinary(n);

//     return 0;
// }

// 6. Decimal To Octal
// void decimalToOctal(int x)
// {
//     int result[32], j;
//     int i = 0;
//     while (x > 0)
//     {
//         result[i] = x % 8;
//         x = x / 8;
//         i++;
//     }
//     for (j = i - 1; j >= 0; j--)
//     {
//         cout << result[j];
//     }
// }
// int main()
// {
//     int n;
//     cout << "Enter Number" << endl;
//     cin >> n;
//     decimalToOctal(n);

//     return 0;
// }
