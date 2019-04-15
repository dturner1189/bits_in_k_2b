# Number of Bits in Each Multiple K of [0, 2^b]

This is a simple program to determine the number of ones bits in the binary string that is the result of the equation: Concatenate every Kth number between zero and 2^b, where K and b are supplied by the user. The result is for each iteration of K in the range 0->2^b. Each result, with the number of ones bits are displayed on a separate line. This is written in c++.

## What This Is

This was an obscure program for a hackathon at my University. This was a speed contest and this code sits in it's original form (so keep that in mind).

### Running

Unix users need only proceed with the following commands in your terminal:

```
$ make
$ ./bits
```

Windows users will need to compile themselves. Simply run the executable after compilation.

### Input & Output

After launching the executable the user should enter two positive integers (enter/return after each) as follows:

```
$ ./bits
6
12
```

The output will look like the following:

```
Original numbers as entered:
	k: 6 b: 12

Here are the multiples and number of bits..

6 : "2" number of ones bits.

12 : "2" number of ones bits.

...

4092 : "10" number of ones bits.

```

### Manifest


```
makefile
```
Compilation instructions for users machines.


```
main.cpp
```

Simple c++ code for program.


## Authors

* **David P. Turner** - https://github.com/dturner1189
