,            # Read first input and store in cell 1
[            # Start loop while cell 1 is not zero
  > ,        # Read second input and store in cell 2
  <          # Move back to cell 1
]            # End loop
<            # Move to cell 1
[            # Start loop to multiply cell 1 by cell 2
  -> +       # Move to cell 2 and increment it while decrementing cell 1
  <          # Move back to cell 1
]            # End loop
>            # Move to cell 2
[-]          # Zero out cell 2
<            # Move back to cell 1
.            # Output the result of the multiplication