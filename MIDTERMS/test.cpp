#include <iostream>
using namespace std;
int main()
{
    int arr[6][6]={{1,2,3,4,5,6}, {2,4,6,8,10,12}, {1,3,5,7,9,11}, {6,7,8,9,10,11}, {1,2,3,9,10,7}, {4,5,6,7,8,1}};

    for(int x = 1; x < 5; x += 2)
        cout << arr[x+1][x]<< " ";
    return 0;
}