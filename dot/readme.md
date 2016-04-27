'''bash
sudo apt-get install graphviz

echo 'graph {' $(./network ee.co.uk) '}' | circo -Tsvg > gen.svg
'''
