## Unicode tests

# Extract plots from SVG
```bash
curl http://www.fileformat.info/info/unicode/char/0950/devanagari_om.svg | ./bitmap  > om.csv && libreoffice om.csv
```

#TODO
* unicode to ascii bitmap preview
* try to_wstring
* try wregex
* explore regex - how simple can we make it?
