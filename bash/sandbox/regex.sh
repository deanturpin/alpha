#!/bin/bash

echo Regular expressions
[[ 'hello!' =~ [[:punct:]] ]] && echo yes || echo no
