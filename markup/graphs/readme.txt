graph -T svg < datafile > plot.svg
echo {0..200..40} | graph -T svg > blah.svg
echo 1 1 2 3 3 1 | graph -T svg -l x > blah.svg
