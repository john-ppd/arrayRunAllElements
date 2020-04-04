

#include <iostream>

using namespace std;
int main() {

    /*
    When working with 2d arrays, its an array within an array, first box is row, second is column,
    int ar[2][3]={{1,2,3},{4,5,6}};
    2 rows 3 colums
    also can be looked at as 2 arrays each a row within another array.
    */

    int ar[2][3] = { {1,2,3},{4,5,6} };

    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << ar[row][col] << " ";//this will loop all the columns in that row with a space between them.
        }
        cout << endl;//this creates a endl between rows.
    }
    


    return 0;
}

