### Build
```bash
$ make
g++ -Wall -Wextra -pedantic -pedantic-errors -std=c++14 -o topologer.o -c topologer.cpp
g++ -o topologer topologer.o
```

### Run
```bash
./topologer < hosts 

##TODO
*Verify mode - test all the IPS defined in a hosts file
```
