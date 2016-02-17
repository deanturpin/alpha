#Extract
##Usage
```bash
 w3wkey=xxxxxxxx ./extract ride.gpx | head
 Revision $Id$
 Reading file ride.gpx
 {"words":["formed","tidy","swung"],"position":[50.845744,-0.155192],"language":"en"}
 {"words":["winks","singer","pump"],"position":[50.845664,-0.155449],"language":"en"}
 {"words":["lease","gladiators","pouch"],"position":[50.845637,-0.155406],"language":"en"}

 {"words":["bleak","error","given"],"position":[50.84534,-0.155278],"language":"en"}
 {"words":["ladder","letter","lows"],"position":[50.845313,-0.155235],"language":"en"}
 {"words":["spared","milk","topped"],"position":[50.845232,-0.155235],"language":"en"}
 {"words":["homes","boring","long"],"position":[50.845125,-0.155192],"language":"en"}
 {"words":["shave","agreed","spices"],"position":[50.844963,-0.155235],"language":"en"}
```
##W3W API
Convert 3 words to position:

https://api.what3words.com/w3w?key=YOURAPIKEY&string=word1.word2.word3

Convert position to 3 words:

https://api.what3words.com/position?key=YOURAPIKEY&position=lat,long

##Resources
* https://en.wikipedia.org/wiki/GPS_Exchange_Format

#Elevation

##Compile
```bash
$ make
g++ -Wall -Wextra -pedantic -pedantic-errors -std=c++11 -o elevation.o -c elevation.cpp
g++ -o elevation elevation.o
```

##Run
```bash
$ ./elevation < ride.gpx 
points 89
max 64.2
min 115
 | 65.2
| 64.6
| 64.8
| 64.4
| 64.2
| 64.4
| 64.4
  | 66.8
   | 67.4
   | 68
     | 69.2
     | 69.6
      | 70.4
       | 71.6
        | 72.8
         | 73.6
         | 74
          | 75
            | 76.2
             | 77.4
             | 78
              | 78.6
               | 79.6
                | 81
                 | 81.2
                  | 82.2
                  | 82.6
                   | 83.4
                   | 83.8
                    | 84.6
                     | 85.2
                     | 85.8
                      | 86.4
                      | 86.8
                       | 87.6
                       | 88
                        | 89
                         | 90
                         | 90
                          | 90.2
                          | 90.8
                          | 91
                           | 91.2
                            | 92.4
                             | 93.2
                             | 93.6
                              | 94.8
                              | 95
                               | 96
                                | 96.8
                                | 97
                                 | 97.8
                                  | 98.2
                                   | 99.4
                                    | 100.8
                                     | 102
                                      | 102.6
                                       | 103.4
                                       | 103.8
                                        | 105
                                          | 106.2
                                           | 107.2
                                           | 108
                                            | 108.6
                                             | 109.6
                                              | 110.6
                                              | 111
                                               | 111.8
                                               | 111.8
                                               | 112
                                                | 113
                                                 | 113.4
                                                  | 114.2
                                                  | 114.4
                                                  | 115
                                                  | 114.4
                                                  | 114.2
                                                 | 113.6
                                                 | 113.4
                                                | 113
                                                | 112.6
                                                | 112.4
                                                | 112.4
                                               | 112
                                               | 111.4
                                              | 110.2
                                             | 109.8
                                           | 108
                                           | 108
```
