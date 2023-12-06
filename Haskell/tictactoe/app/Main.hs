import Lib

main :: IO ()
main = playGame X initialBoard

playGame :: Player -> Board -> IO ()
playGame player board = do
  displayBoard board
  putStrLn $ "Player " ++ show player ++ ", enter your move (row and column): "
  input <- getLine
  let move = parseMove input
  case move of
    Just m ->
      case makeMove player m board of
        Just newBoard ->
          if isGameOver newBoard
            then do
              displayBoard newBoard
              putStrLn $ "Player " ++ show player ++ " wins!"
            else playGame (nextPlayer player) newBoard
        Nothing -> do
          putStrLn "Invalid move. Try again."
          playGame player board
    Nothing -> do
      putStrLn "Invalid input. Try again."
      playGame player board

parseMove :: String -> Maybe (Int, Int)
parseMove input =
  case words input of
    [rowStr, colStr] -> do
      row <- readMaybe rowStr
      col <- readMaybe colStr
      return (row, col)
    _ -> Nothing

readMaybe :: (Read a) => String -> Maybe a
readMaybe s = case reads s of
  [(x, "")] -> Just x
  _ -> Nothing
