#include<iostream>
#include<cstdlib>
#include <ctime>
#include <cmath>

//-------Assignment-2 Submitted by Roll number: CS21M515 -
using namespace std;

 // GCD

// Function to return
// gcd of a and b
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
    /// end


int main(){

    int n;
    int m;
    int t;
    int c;

    cout << "-----------------------------------------------------------------" << endl;
    cout << "-------Assignment-2 Submitted by Roll number: CS21M515 ----------" << endl;
    cout << "-----------------------------------------------------------------" << endl;
    cout << "Enter the number so that how many of random numbers you want" << endl;
    cin >> n;

  cout << "Random numbers are:" << endl;

  int randomNumArray[n];
   float prob;
 int range = 1000;

 if(n > range){
    range = n + range;
 }
    // Providing a seed value
    srand((unsigned) time(NULL));
  m = n+1;
    // Loop to get 5 random numbers

    for(int i=0; i < n; i++){

        // Retrieve a random number between 100 and 200
        // Offset = 1
        // Range = 1000

        int random = 1 + (rand() % range);

        randomNumArray[i] = random;
        // Print the random number
        cout<<random<<endl;
    }
 float euclideanGCDCount = 0.0;

     for(int i=0; i < n; i++){
        // cout << randomNumArray[i] << "  " << endl;

         int a = randomNumArray[i];

         int b = randomNumArray[++i];

         int g = gcd(a, b);
         cout << "GCD(" << a << ", " << b << ") = " << g << endl;

         if(g == 1){
            euclideanGCDCount++;

         }

     }

//     cout << "i(" << i  << endl;

                float numGroups = n/2;
          cout << " Total number (a,b) groups are: " << numGroups << endl;
         cout << " Euclidean Algorithm GCD(a,b)==1 equal to one, count are: " << euclideanGCDCount << endl;

          prob = euclideanGCDCount / numGroups;

           cout << "So the Probability of GCD(a,b) equal to 1 is : (" << euclideanGCDCount << "/" << numGroups << ") = " << prob << endl;



        float cal = 6/prob;
        float pi = sqrt(cal);


         cout << " So the final estimated pi value is : " << pi << endl;

      int ex;
     cout << "press any number to exit: ";
     cin >> ex;
     if(ex>0){
        return 0;
     }

    //return 1;

}

