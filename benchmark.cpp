#include <iostream>
#include <random>

using namespace std;

int main()
{
    mt19937 mt_rand(time(0));

    cout << mt_rand() << endl;

    return 0;
}