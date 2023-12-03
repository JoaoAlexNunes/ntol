(ns tictactoe.core 
  (:require [tictactoe.ui :as ui])
  (:gen-class))

(defn check-win [player board]
  (or (and (= (nth board 0) player) (= (nth board 1) player) (= (nth board 2) player))
      (and (= (nth board 3) player) (= (nth board 4) player) (= (nth board 5) player))
      (and (= (nth board 6) player) (= (nth board 7) player) (= (nth board 8) player))
      (and (= (nth board 0) player) (= (nth board 3) player) (= (nth board 6) player))
      (and (= (nth board 1) player) (= (nth board 4) player) (= (nth board 7) player))
      (and (= (nth board 2) player) (= (nth board 5) player) (= (nth board 8) player))
      (and (= (nth board 0) player) (= (nth board 4) player) (= (nth board 8) player))
      (and (= (nth board 2) player) (= (nth board 4) player) (= (nth board 6) player))))

(defn get-move [player board]
  (let [move (read-line)]
    (if (and (integer? (read-string move))
             (<= 1 (read-string move) 9)
             (= (nth board (dec (read-string move))) \space))
      (assoc board (dec (read-string move)) player)
      (do
        (println "Invalid move. Please enter a number between 1 and 9.")
        (get-move player board)))))


(defn play [player board]
  (println "Player " player "'s turn.")
  (ui/print-board board)
  (let [new-board (get-move player board)]
    (if (check-win player new-board)
      (do
        (ui/print-board new-board)
        (println "Player " player " wins!"))
      (if (every? #(not= \space %) new-board)
        (do
          (ui/print-board new-board)
          (println "It's a tie!"))
        (play (if (= player \X) \O \X) new-board)))))


(defn -main []
  (play \X [\space \space \space \space \space \space \space \space \space]))
