#include <iostream>
using namespace std;

int main(){

cout << "\033[31mThis text is red\033[0m" << endl;
cout << "\033[32mThis text is green\033[0m" << endl;
cout << "\033[33mThis text is yellow\033[0m" << endl;
cout << "\033[34mThis text is blue\033[0m" << endl;

    return 0;
}

/*

You can use ANSI escape codes. These are special codes that you can use to
change the color of the text that is displayed in the console.
Here's an example of how you can use ANSI escape codes to display text in different colors:

```c++
cout << "\033[31mThis text is red\033[0m" << endl;
cout << "\033[32mThis text is green\033[0m" << endl;
cout << "\033[33mThis text is yellow\033[0m" << endl;
cout << "\033[34mThis text is blue\033[0m" << endl;
```

In this example, we use the `\033[` escape code followed by a number and the `m` character
to change the color of the text. The number specifies the color that we want to use.
For example, `31` is red, `32` is green, `33` is yellow, and `34` is blue. After the colored
text, we use the `\033[0m` escape code to reset the color back to the default color.
You can use these escape codes anywhere in your program where you want to display colored text.
Just make sure to always reset the color back to the default color after displaying the colored text.

*/