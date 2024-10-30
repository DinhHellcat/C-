//Phân số
fixed<<setprecision(2)

//Độ dài mảng
int length = sizeof a / sizeof(int);
//Độ dài chuỗi
int length = s.length();

//Sort
sort(a,a+n);

//Xóa cache
cin.ignore();
fflush(stdin);

//Input EOF
while(cin>>s)

//stringstream
string s;
stringstream ss(s)
string word;
while(ss>>word){}

//khoảng cách
//a nhỏ - A lớn: 32
//số 1 và kí tự 1: 48

//Phần tử lớn/nhỏ nhất của mảng
cout<<*max_element(a,a+n);
cout<<*min_element(a,a+n);

//Đảo chuỗi
reverse(s.begin(), s.end());

//điền từ 1 đến n phần tử của vector
iota(a.begin(), a.end(), 1);

//Ước của 1 số
for(long i=1;i<=n/i;i++)
{
    if(n%i==0)
        s+=i+n/i;
    if(pow(i,2)==n)
        s-=i;
}
//Ước chung nhỏ nhất của 2 số
int gcd(int a,int b)
{
    if(a==0 || b==0)
        return a + b;
    while (a != b)
    {
        if (a > b)
            a-=b;
        else
            b-=a;
    }
    return a;
}
//Bội chung lớn nhất của 2 số
(a*b)/gcd(a,b) //bội 2 số chia cho ucnn

//Tam giác Pascal giải bài tổ hợp chập n của k
int combination(int n, int k) {
    vector<vector<int>> C(n+1,vector<int>(k+1,0));
    for(int i=0;i<=n;++i)
    {
        for(int j=0;j<=min(i,k);++j)
        {
            if(j==0 || j==i)
                C[i][j] = 1;
            else
                C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
        }
    }
    return C[n][k];
}

//Năm nhuận
if((y%4==0 && y%100!=0) || y%400==0)

//Dec ti Bin
string dectobin(long long x)
{
    string s;
    while(x>0)
    {
        if(x%2==0)
            s+='0';
        else
            s+='1';
        x/=2;
    }
    return s;
}

//Dãy con tăng dài nhất LIS longestIncreasingSubsequence
//Dynamic Programming DP
int longestIncreasingSubsequenceDP(const vector<int>& arr) {
    int n = arr.size();
    vector<int> dp(n, 1); // Initialize dp array with 1

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[i] > arr[j]) {
                dp[i] = max(dp[i], dp[j] + 1);
                cout<<i<<" "<<j<<endl;
            }
        }
    }

    return *max_element(dp.begin(), dp.end()); // Return the maximum value in dp array
}

//so nguyen to

//tao vector isPrime
const int limit = 100000
vector<bool> isPrime(limit + 1,true);
void progress()
{
    isPrime[0]=isPrime[1]=false;
    for(long long i=0;i*i<=limit;i++)
        if(isPrime[i])
            for(long long j=i*i;j*j<=limit;j+=i)
                isPrime[j]=false;
}

//tao vector cac so ngto
const int limit = 100000;
vector<bool> isPrime(limit + 1, true);
vector<int> primes;

void sieve() {
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i <= limit; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
            for (int j = i * 2; j <= limit; j += i) {
                isPrime[j] = false;
            }
        }
    }
}






//LIS nhưng dùng các loại kĩ thuật khác DP
//Using lower_bound and Binary Search
int longestIncreasingSubsequenceBinarySearch(const vector<int>& arr) {
    vector<int> lis;

    for (int num : arr) {
        auto pos = lower_bound(lis.begin(), lis.end(), num);
        if (pos == lis.end()) {
            lis.push_back(num); // Append to the LIS sequence
        } else {
            *pos = num; // Replace the element at the position
        }
    }

    return lis.size(); // The size of lis is the length of the longest increasing subsequence
}
//Using multiset
int longestIncreasingSubsequenceMultiset(const vector<int>& arr) {
    multiset<int> s;

    for (int num : arr) {
        auto it = s.upper_bound(num); // Find the first element greater than num
        if (it != s.end()) {
            s.erase(it); // Replace the element
        }
        s.insert(num); // Insert the current element
    }

    return s.size(); // The size of the multiset is the length of the longest increasing subsequence
}
