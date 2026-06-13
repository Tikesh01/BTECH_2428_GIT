#include <iostream>
#include <ctime>
#include <chrono>
using namespace std;
int main()
{
    auto time = chrono::system_clock::now();
    time_t current_time = chrono::system_clock::to_time_t(time);
    cout<<ctime(&current_time);

    return 0;
} 