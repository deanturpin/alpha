echo Search and replace
sar='abcabcabcabcabc'

echo Original $sar
echo Replace first ${sar/a/d}
echo Replace all ${sar//a/d}
