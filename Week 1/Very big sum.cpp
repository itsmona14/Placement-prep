https://www.hackerrank.com/challenges/a-very-big-sum/problem

long aVeryBigSum(vector<long> ar) {
    long sum = 0;
    return accumulate(ar.begin(), ar.end(),sum);
}
