#include <bits/stdc++.h>

using namespace std;

// Complete the solve function below.

string solve(string year) {

    string date="13";
    string month="09";

    stringstream geek(year);
    int x = 0;
    geek >> x;

    if (x % 4 == 0)
    {
        //cout<<"S";
        date="12";
    }
    if(year=="1918")
        return "26:09:1918";

    return date+':'+month+':'+year;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string year;
    cin >> year;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = solve(year);

    cout << result << "\n";

    fout.close();

    return 0;
}
