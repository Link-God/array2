#include <iostream>
#include <sstream>
using namespace std ;

bool read_numbers(int array[10])
{
    string string; 
    getline( cin, string );
    istringstream stream( string );
    bool success = true;
    for( int i = 0; i < 10; ++i ) {
        if( !( stream >> array[ i ] ) ) {
           success = false;
           break;
        }
    }
   
   return success;
}

int main()
{
   int array1[10];
   int array2[10];
   
   if( read_numbers( array1 ) && read_numbers( array2 ) ) 
    {
        int max1= array1[0];
        int max2 = array2[0];
        for(int i=0 ;i<10  ;i++)
            {
                if (array1[i]>max1)
                    {
                        max1=array1[i];
                    }
            }          
        for(int j=0 ;j<10  ;j++)
            {
                if (array2[j]>max2)
                    {
                        max2=array2[j];
                    }
            }
      
      cout<<"max :" << max1+max2;
    }
   else {
       std::cout << "An error has occurred while reading numbers";
   }
}
