,>,            # read two single-digit numbers from the user and store them in cells 1 and 2
>++++++        # store the value 6 in cell 3
[              # start a loop that multiplies the value in cell 1 by the value in cell 2
  >++++++++   # store the value 8 in cell 4
  <-          # decrement cell 3
]
>              # move to cell 4
[
  -           # decrement cell 4
  <<          # move to cell 2
  -           # decrement cell 2
  >>          # move to cell 4
]
<<             # move to cell 1
[
  -           # decrement cell 1
  <+          # increment cell 2 while decrementing cell 1
  >           # move to cell 3
]
<.             # print the result (the product of the two input numbers)