#!/bin/bash
arm-none-eabi-gdb --eval-command="target remote localhost:3333" bin/saml21-jn/tests_unittests.elf 
