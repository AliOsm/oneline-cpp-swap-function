# oneline-cpp-swap-function
Swap two integers in C++ programming language using only one line!

## How is this done?
With math you can do this and alot of things! so let us declare two variables, x and y and set them to 1 and 2 respectively:

```
int x = 1, y = 2;
```

Now if we apply three equations on our variables we will swap them without declare temporary variable, the equations is:

```
x; y;      // x =  1 | y = 2
x = x - y; // x = -1 | y = 2
y = x + y; // x = -1 | y = 1
x = y - x; // x =  2 | y = 1
```

And if we want we can write our equations in one line like this:

```
x = (y  = (x = x - y) + y) - x;
```

Have fun :D
