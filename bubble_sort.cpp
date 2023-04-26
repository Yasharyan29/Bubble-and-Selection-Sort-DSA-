// bubble sorting<--internal sorting example
#include <iostream> //a[4] = {30,20,70,12} ={n}={4}
                    // 0  1  2  3 = {n-1}={4-1=3}
using namespace std;

// create main algorithm of sorting function

void bubbleSort(int a[])
{
    for (int i = 1; i < 4; i++)
    { // i=round //i=0 //i=1 //i=2 //i=3
        for (int j = 0; j <= (4 - 1 - i); j++)
        { // 3-0=3 //3-1=2 //3-2=1 //3-3=0 <--this loop decrease comparison.
            if (a[j] > a[j + 1])
            {
                // swap
                int temp = a[j]; // temp = 30
                a[j] = a[j + 1]; // a[j]= 20
                a[j + 1] = temp; // a[j+1]= 30
            }
        }
    }
}
int main()
{
    int myarray[4];
    cout << "enter 4 intgers in any order: ";
    for (int i = 0; i < 4; i++)
    {
        cin >> myarray[i];
    }
    cout << "before sorting" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << myarray[i] << " " << endl;
    }
    bubbleSort(myarray); // sorting
    cout << "after sorting" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << myarray[i] << " ";
    }
    return 0;
}