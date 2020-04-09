# Test faile for "Lab2"


# commands.gdb provides the following functions for ease:
#   test "<message>"
#       Where <message> is the message to print. Must call this at the beginning of every test
#       Example: test "PINA: 0x00 => expect PORTC: 0x01"
#   checkResult
#       Verify if the test passed or failed. Prints "passed." or "failed." accordingly, 
#       Must call this at the end of every test.
#   expectPORTx <val>
#       With x as the port (A,B,C,D)
#       The value the port is epected to have. If not it will print the erroneous actual value
#   setPINx <val>
#       With x as the port or pin (A,B,C,D)
#       The value to set the pin to (can be decimal or hexidecimal
#       Example: setPINA 0x01
#   printPORTx f OR printPINx f 
#       With x as the port or pin (A,B,C,D)
#       With f as a format option which can be: [d] decimal, [x] hexadecmial (default), [t] binary 
#       Example: printPORTC d
#   printDDRx
#       With x as the DDR (A,B,C,D)
#       Example: printDDRB

# Partner(s) Name & E-mail:none
# Lab Section: 023
 # Assignment: Lab #2  Exercise #3 test
 # Exercise Description: [optional - include for your own benefit]
 #   
 # I acknowledge all content contained herein, excluding template 
 # or example code, is my own original work.


echo ======================================================\n
echo Running all tests..."\n\n

# Example test:
test "PINA: 0x00 ,PINB: 0x00, PINC0x00 => PINB: 0x00"              #print this message out

# Set inputs
setPINA 0x00
setPINB 0x00
setPINC 0x00
# Continue for several ticks
continue 2
# Set expect values
expectPORTD 0x00
# Check pass/fail
checkResult

# Add tests below
test "PINA: 0x30 => PORTC: 3"
setPINA 0x30
setPINB 0x30
setPINC 0x30
continue 2
expectPORTD 0x91
checkResult

test "PINA: 0x02 => PINC: 3"
setPINA 0x55
setPINB 0x02
setPINC 0x03
continue 2
expectPORTD 0x5A
checkResult

test "PINA: 0x03 => PINC: 2"
setPINA 0x20
setPINB 0x20
setPINC 0x20
continue 2
expectPORTD 0x60
checkResult

test"PINA: 0x07 => PINC: 1"
setPINA 0x04
setPINB 0x04
setPINC 0x04
continue 2
expectPORTD 0x0C
checkResult

# Report on how many tests passed/tests ran
set $passed=$tests-$failed
eval "shell echo Passed %d/%d tests.\n",$passed,$tests
echo ======================================================\n
