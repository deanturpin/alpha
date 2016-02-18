# Extract plots from SVG and generate CSV
```bash
curl http://www.fileformat.info/info/unicode/char/0950/devanagari_om.svg | ./bitmap  > om.csv && libreoffice om.csv
```

![alt text](https://github.com/deanturpin/alpha/blob/master/unicode/images/om_plot.png "Excel plot of om symbol")

#TODO
- [ ] Allow white space after command
- [ ] Unicode to ascii bitmap preview
- [ ] Try to_wstring
- [ ] Try wregex
- [ ] Explore regex - how simple can we make it?
- [x] Add border
- [ ] Unicode border
- [ ] Add framerate
- [ ] Add axes
