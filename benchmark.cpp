#include <iostream>
#include <random>

using namespace std;

int main()
{
    // mt19937 mt_rand(time(0));
    // https://stackoverflow.com/questions/15509270/does-stdmt19937-require-warmup
    std::seed_seq seq{1, 2, 3, 4, 5};
    mt19937 mt_rand(seq);

    cout << mt_rand() << endl;

    return 0;
}

// clang++ -std=c++11 benchmark.cpp  -o benchmark
// ./benchmark