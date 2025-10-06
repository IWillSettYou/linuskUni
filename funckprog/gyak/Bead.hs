module Bead where
import Prelude

xnor :: Bool -> Bool -> Bool
xnor True True = True
xnor False False = False
xnor _ _ = False

xor3 :: Bool -> Bool -> Bool -> Bool
xor3 True True True = True
xor3 a b c = (not(a && b) && not(c)) || (not(a) && not( b && c) || (not(a && c) && not(b)))
{- 
xor3 True False False = True
xor3 False True False = True    boring af solution, I ain't no gae
xor3 False False True = True 
xor3 _ _ _ = False -}

deleteIf :: Char -> Bool -> Char
deleteIf a True = ' '
deleteIf a False = a

switchTabSpace :: Char -> Char
switchTabSpace '\t' = ' '
switchTabSpace ' ' = '\t'
switchTabSpace a = a