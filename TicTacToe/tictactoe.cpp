#include <iostream>
using namespace std ;

int main (){
    char grid[3][3];
    int num=1 ;
    for(int i =0 ; i < 3 ; i++){
        for ( int j =0 ; j < 3 ; j++){
            grid[i][j]='0'+num;
            num ++;
        }
    }



    function printState(){
        for (int i =0 ; i < 3 ; i++){
            for ( int j=0 ; j < 3 ; j++){
                printf("%c ", grid[i][j]); 
            }
        printf("/n")
        }
    }

    

    printState();
}

