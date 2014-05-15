#!/bin/bash
# create multiresolution windows icon
ICON_SRC=../../src/qt/res/icons/bitraam.png
ICON_DST=../../src/qt/res/icons/bitraam.ico
convert ${ICON_SRC} -resize 16x16 bitraam-16.png
convert ${ICON_SRC} -resize 32x32 bitraam-32.png
convert ${ICON_SRC} -resize 48x48 bitraam-48.png
convert bitraam-16.png bitraam-32.png bitraam-48.png ${ICON_DST}

