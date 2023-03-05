#!/bin/bash

version=""


echo "Please enter the version Number to zip it into the final file:"

read version

zip ../netico-inventory-${version}.zip /home/diaa/netico-inventory
