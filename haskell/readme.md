Install the compiler
```
sudo apt-get install ghc
```

Compile and run
```
$ ghc -o hello hello.hs && ./hello 
[1 of 1] Compiling Main             ( hello.hs, hello.o )
Linking hello ...
Hello, World!
```

## Examples
```haskell
Prelude> succ 5
6
Prelude> truncate 6.59
6
Prelude> round 6.59
7
Prelude> sqrt 2
1.4142135623730951
Prelude> not (5 < 3)
True
Prelude> gcd 21 14
7
```

## Resources
- https://wiki.haskell.org/Learn_Haskell_in_10_minutes
