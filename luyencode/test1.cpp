#include <bits/stdc++.h>
using namespace std;

// Tối ưu hóa với Sàng Eratosthenes để tạo danh sách số nguyên tố
const int LIMIT = 100000; // Chỉ cần tới 10^5 để phân tích số tới 10^12
vector<bool> isPrime(LIMIT + 1, true);
vector<int> primes;

void sieve() {
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i <= LIMIT; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
            for (int j = i * 2; j <= LIMIT; j += i) {
                isPrime[j] = false;
            }
        }
    }
}

void primeFactorization(long long n) {
    vector<pair<long long, int>> factors;
    for (int prime : primes) {
        if (prime * prime > n) break; // Không cần kiểm tra quá căn bậc hai của n
        if (n % prime == 0) {
            int count = 0;
            while (n % prime == 0) {
                count++;
                n /= prime;
            }
            factors.push_back({prime, count});
        }
    }
    // Nếu n > 1 sau khi chia hết, thì n cũng là thừa số nguyên tố
    if (n > 1) {
        factors.push_back({n, 1});
    }

    // In ra kết quả
    cout << factors.size() << endl;
    for (const auto &factor : factors) {
        cout << factor.first << " " << factor.second << endl;
    }
}

int main() {
    sieve(); // Khởi tạo danh sách số nguyên tố
    long long n;
    cin >> n;
    primeFactorization(n);
    return 0;
}
