#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0;
    cout << "Enter the size of array\n";
    cin >> n;
    int arr[n], num, i, mount = 0;
    // cout << "Enter the total number\n";
    // cin >> num;
    cout << "Enter the number\n";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << "\n Duplicate Number \n"<<endl;;
                cout << "dupliate found at " << i;
                count = 1;
                mount++;
            }
        }
    }
    if (count == 0)
    {
        cout << "\n No Duplicate\n"
             << endl;
    }
    cout << "Total No. of duplicate" << mount << endl;
    return 0;
}
