# Extract plots from SVG and generate CSV
```bash
curl http://www.fileformat.info/info/unicode/char/0950/devanagari_om.svg | ./bitmap  > om.csv && libreoffice om.csv
```

![alt text](https://github.com/deanturpin/alpha/blob/master/unicode/images/om_plot.png "Excel plot of om symbol")

#TODO
* unicode to ascii bitmap preview
* try to_wstring
* try wregex
* explore regex - how simple can we make it?
* add border
* add framerate
* add axes
