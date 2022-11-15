#include<iostream> 
using namespace std; 

int main()
{
int k, i = 1, sum_k = 0, number;
cout << " Enter the amount of integers to sum = "; 
cin >> k;
if (k==0);
 else
do {
cout << "Enter integer nr. " << i << ": "; 
while (!(cin >> number))
    {
        cout << "ERROR: This value is not an integer! " << endl;
        cout << "Enter integer nr. " << i << ": "; 
        cin.clear();
        cin.ignore(12, '\n');
    }
sum_k += number; i++;
} while (i <= k);
cout << " The total sum of " << k << " integers is: "  << sum_k;
return 0;
}
