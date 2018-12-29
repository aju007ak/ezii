#include<bits/stdc++.h>
using namespace std;
 
// finds the minimum length
int minLength(string arr[], int n)
{
    int min = INT_MAX;
 
    for (int i=0; i<=n-1; i++)
        if (arr[i].length() < min)
            min = arr[i].length();
    return(min);
}
//checks if the input array contains this prefix 
bool checkPrefix(string arr[], int n, string str,
                       int start, int end)
{
    for (int i=0; i<=n-1; i++)
        for (int j=start; j<=end; j++)
            if (arr[i][j] != str[j])
                return (false);
    return (true);
}
 
// returns the longest common prefix
string longestCommonPrefix(string arr[], int n)
{
    int index = minLength(arr, n);
    string prefix; // Our resultant string
 
    //Binary search
    int low = 0, high = index;
 
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
 
        if (checkPrefix (arr, n, arr[0], low, mid))
        {
            // If all the strings in the input array contains
            // this prefix then append this substring to
            // our answer
            prefix = prefix + arr[0].substr(low, mid-low+1);
 
            // right part
            low = mid + 1;
        }
 
        else // Go for the left part
            high = mid - 1;
    }
 
    return (prefix);
}
 

int main()
{
    string arr[] = {"boyfriend", "boy", "bo"};
    int n = sizeof (arr) / sizeof (arr[0]);
 
    string ans = longestCommonPrefix(arr, n);
 
    if (ans.length())
        cout << "The longest common prefix is "<< ans<<endl;
    else
        cout << "There is no common prefix";
    return (0);
}
