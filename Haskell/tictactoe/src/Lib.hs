module Lib
  ( Player (X, O),
    Cell,
    Board,
    initialBoard,
    displayBoard,
    isWinner,
    isFull,
    isGameOver,
    makeMove,
    isValidMove,
    updateBoard,
    nextPlayer,
  )
where

import Data.List
import Data.Maybe

data Player = X | O deriving (Eq, Show)

type Cell = Maybe Player

type Board = [[Cell]]

initialBoard :: Board
initialBoard = replicate 3 (replicate 3 Nothing)

displayBoard :: Board -> IO ()
displayBoard = putStrLn . unlines . map (concatMap displayCell)

displayCell :: Cell -> String
displayCell Nothing = " - "
displayCell (Just X) = " X "
displayCell (Just O) = " O "

isWinner :: Player -> Board -> Bool
isWinner player board =
  any (all (== Just player)) rows
    || any (all (== Just player)) cols
    || all (== Just player) diag1
    || all (== Just player) diag2
  where
    rows = board
    cols = transpose board
    diag1 = [board !! i !! i | i <- [0 .. 2]]
    diag2 = [board !! i !! (2 - i) | i <- [0 .. 2]]

isFull :: Board -> Bool
isFull = all (all isJust)

isGameOver :: Board -> Bool
isGameOver board = isWinner X board || isWinner O board || isFull board

makeMove :: Player -> (Int, Int) -> Board -> Maybe Board
makeMove player (row, col) board
  | isValidMove (row, col) board = Just $ updateBoard player (row, col) board
  | otherwise = Nothing

isValidMove :: (Int, Int) -> Board -> Bool
isValidMove (row, col) board =
  inRange row && inRange col && isNothing (board !! row !! col)
  where
    inRange x = x >= 0 && x <= 2

updateBoard :: Player -> (Int, Int) -> Board -> Board
updateBoard player (row, col) board =
  take row board
    ++ [take col (board !! row) ++ [Just player] ++ drop (col + 1) (board !! row)]
    ++ drop (row + 1) board

nextPlayer :: Player -> Player
nextPlayer X = O
nextPlayer O = X
