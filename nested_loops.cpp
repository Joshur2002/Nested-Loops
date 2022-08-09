#include <iostream>

using namespace std;

int main () {
    //first ex
    //rows
    for (int i = 0; i < 5; i++) {
        //columns
        for (int j = 0; j < i + 1; j++) {
            printf("* ");
            if (j == i)
                printf("\n");
        }
    }
    cout << "" << endl;
    //second ex
    //rows
    for (int i = 0; i < 5; i++) {
        //columns
        int l = 1;
        for (int j = 0; j < i + 1; j++) {
            printf("%d ", l);
            l++;
            if (j == i) {
                printf("\n");
                l = 1;
            }
        }
    }
    cout << "" << endl;
    //third ex
    //rows
    int m = 0;
    for (int i = 0; i < 5; i++) {
        m++;
        //columns
        for (int j = 0; j < i + 1; j++) {
            printf("%d ", m);
            if (j == i) 
                printf("\n");
        }
    }
    cout << "" << endl;
    //fourth ex
    //rows
    for (int i = 0; i < 5; i++) {
        //columns
        for (int j = 5 - i; j > 0; j--) {
            printf("* ");
            if (j < 2) {
                printf("\n");
            }
        }
    }
    cout << "" << endl;
    //fifth ex
    //rows
    int n = 0;
    for (int i = 0; i < 5; i++) {
        n++;
        //columns
        for (int j = 0; j < 5; j++) {
            if (j < 5 - n) {
                printf("  ");
            }
            else {
                printf("* ");
                if (j == 4)
                    printf("\n");
            }
        }
    }
}