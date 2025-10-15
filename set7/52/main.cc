#include <ctime>
#include <iomanip>
#include <iostream>

using namespace std;

ostream& now(ostream& os)
{
    time_t epochTime = time(0);
    tm *tmObj = localtime(&epochTime);  // Convert to local time
    return os << put_time(tmObj, "%H:%M:%S");
}

int main()
{
    cout << now << '\n';
}
