#!/bin/bash

curdir=`dirname $0`
cd $curdir
/home/cnc/Qt/QtIFW-4.5.1/bin/binarycreator -c config/config.xml -p packages MeatecCncStoneUpdate.run
