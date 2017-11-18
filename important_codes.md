# Important Codes

```cpp
auto m1=*max_element(arr, arr+n);
auto m2=*min_element(arr, arr+n);

auto d1=distance(arr, max_element(arr, arr+n));
auto d2=distance(arr, min_element(arr, arr+n));

find(arr, arr+n, 0)!=&arr[n] ? cout << "Oh, my keyboard!" : cout << "I become the guy.";

bool allCharactersSame(string s)
{
    return (s.find_first_not_of(s[0]) == string::npos);
}
```

* `str.begin()`, `str.end()` --> **string iterator**

* `str.front()`, `str.back()` --> **string first and last characters**

* `str.push_back(char c)` --> **appending character to string**

* `str.append(string s)` --> **appending string to a string**\

* [str.insert()](http://www.geeksforgeeks.org/stdstringinsert-in-c/)

*insert() is used to insert characters in string at specified position. It supports various syntaxes to facilitate same.*

* Dynamically allocated memory is allocated on Heap and non-static and local variables get memory allocated on Stack.

* strlen(v[unsorted_i].second.c_str()) == v[unsorted_i].second.length() // Here v[unsorted_i].second is string

* string sorting 
```cpp
sort(unsorted.begin(), unsorted.end(), [](const string& a, const string& b) {
        if (a.length() != b.length()) {
            return a.length() < b.length();
        }
        return a < b;
    });

```
