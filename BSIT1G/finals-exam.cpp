/*
#include <iostream>
#include <string.h>
using namespace std;
int main(){

    struct student{
        int num;
        char name[25];
    };
    student stu;
    stu.num = 123;
    strcpy(stu.name, "John");
    cout << stu.num << endl;
    cout << stu.name << endl;
    return 0;
}

*/

/*

#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[]){
    string str;
    cin >> str;
    cout << str;
    return 0;
}

*/

/*

#include <iostream>
#include <string>
using namespace std;
int main(){
    char name[] = "coMPutER";
    for (int x = 0; x < strlen(name); x++)
        if (islower(name [x]))
            name [x] = toupper(name[x]);
        else
            if (isupper(name[x]))
                if (x % 2 == 0)
                    name[x] = tolower(name[x]);
                else
                    name[x] = name[x-1];
    cout << name;
    return 0;
}

*/

/*

#include <iostream>
using namespace std;
struct sec{
    int a;
    char b;
};

int main(){
    struct sec s = {25,50};
    struct sec *ps = (struct sec *)&s;
    cout << ps->a << ps->b;
    return 0;
}

*/

/*
#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[]){
    char str[] = "Hello World";
    cout << str[0];
    return 0;
}
*/



