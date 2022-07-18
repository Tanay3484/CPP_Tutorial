/*Program to print a rhombus based on the number of rows entered by the user.
For e.g., for rows = 4, the pattern will be:
   ****
  ****
 ****
****
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}