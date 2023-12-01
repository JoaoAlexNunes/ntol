(ns tictactoe.core 
  (:require [tictactoe.ui :as ui]))

(defn check-win [player board]
  (or (and (= (nth board 0) player) (= (nth board 1) player) (= (nth board 2) player))
      (and (= (nth board 3) player) (= (nth board 4) player) (= (nth board 5) player))
      (and (= (nth board 6) player) (= (nth board 7) player) (= (nth board 8) player))
      (and (= (nth board 0) player) (= (nth board 3) player) (= (nth board 6) player))
      (and (= (nth board 1) player) (= (nth board 4) player) (= (nth board 7) player))
      (and (= (nth board 2) player) (= (nth board 5) player) (= (nth board 8) player))
      (and (= (nth board 0) player) (= (nth board 4) player) (= (nth board 8) player))
      (and (= (nth board 2) player) (= (nth board 4) player) (= (nth board 6) player))))

(defn play [player board]
  (println "Player " player "'s turn.")
  (ui/print-board board)
  (let [new-board (ui/get-move player board)]
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
