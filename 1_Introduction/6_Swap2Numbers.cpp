// C++ Program to swap two numbers

#include <iostream>
using namespace std;

int main()
{
    int a = 6, b = 8, temp;

    cout << "Before swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    //Swapping
    temp = a;
    a = b;
    b = temp;

    cout << "\nAfter swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;
    return 0;
}

/*
// C++ Program to swap two numbers  without
// using temporary variable

// Method 1: (Using Addition and subtraction) 
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    cout << "Before Swapping: x = " << x << ", y = " << y << endl;;
    // Code to swap 'x' and 'y'
    x = x + y;
    y = x - y;
    x = x - y;
    cout << "After Swapping: x = " << x << ", y = " << y;
}

#include <bits/stdc++.h>
using namespace std;

// Method 2: (Using Multiplication and division) 
int main()
{ // NOTE - for this code to work in a generalised sense, y
  // !- 0 to prevent zero division
    int x, y;
    cin >> x >> y;

    cout << "After Swapping: x = " << x << ", y = " << y << endl;
    if (y == 0) {
        y = x;
        x = 0;
    }
    else if (x == 0) {
        x = y;
        y = 0;
    }
    // Code to swap 'x' and 'y'
    else {
        x = x * y;
        y = x / y;
        x = x / y;
    }
    cout << "After Swapping: x = " << x << ", y = " << y;
}

// Method 3: (Using Bitwise XOR) 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    cout << "After Swapping: x = " << x << ", y = " << y << endl;
    
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
    
    cout << "After Swapping: x = " << x << ", y = " << y;
}


*/