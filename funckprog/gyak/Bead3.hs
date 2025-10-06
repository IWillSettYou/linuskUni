module Bead3 where

indexOfArg :: Integer -> Integer -> Integer -> Integer
indexOfArg a b c
    | a == 0 = 1
    | b == 0 = 2
    | c == 0 = 3
    | otherwise = -1

evenSum :: Integral a => a -> a -> Bool
evenSum x y
    | (x + y) `mod` 2 == 0 = True
    | otherwise = False

multiply :: Integer -> Integer -> Integer
multiply 0 _ = 0
multiply _ 0 = 0
multiply a 1 = a
multiply a b = a + multiply a (b - 1)

