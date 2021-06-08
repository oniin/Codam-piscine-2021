#!/bin/sh
ifconfig -a | grep 'ether ' | cut -b 8- | cut -b -17