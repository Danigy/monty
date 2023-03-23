,------------------------------------------------ # Read first digit from stdin and store in current memory cell
>,------------------------------------------------ # Read second digit from stdin and store in next memory cell
[                                                # Begin loop that multiplies the two digits
<[>>+<<<+>-]>>[<<+>>-]                           # Copy value in first memory cell to third and zeroth memory cells,
                                                 # then copy value in third memory cell back to first
<-                                               # Decrement second digit
]                                                # End loop that multiplies the two digits
# Now we are back to the first memory cell with the multiplied value in it
# Move to memory cell 0 and add ASCII '0' (48) to print result as ASCII character
<<++++++++++++++++++++++++++++++++++++++++++++++++.