-- Every line that starts in the same column as that p is another statement in the
-- do block. If you indent more, it's part of the previous statement. If you indent
-- less, it ends the do block. This is called "layout", and Haskell uses it to
-- avoid making you put in statement terminators and braces all the time. (The then
-- and else phrases have to be indented for this reason: if they started in the
-- same column, they'd be separate statements, which is wrong.) 

-- https://wiki.haskell.org/Learn_Haskell_in_10_minutes

main = do putStrLn "What is 2 + 2?"
          x <- readLn
          if x == 4
		  then putStrLn "You're right!"
		  else putStrLn "You're wrong!"
