(ns tictactoe.ui)

#_{:clj-kondo/ignore [:clojure-lsp/unused-public-var]}
(defn print-board [board]
  (println " " (nth board 0) " | " (nth board 1) " | " (nth board 2))
  (println "---+---+---")
  (println " " (nth board 3) " | " (nth board 4) " | " (nth board 5))
  (println "---+---+---")
  (println " " (nth board 6) " | " (nth board 7) " | " (nth board 8)))

(defn get-move [player board]
  (let [move (read-line)]
    (if (and (integer? (read-string move))
             (<= 1 (read-string move) 9)
             (= (nth board (dec (read-string move))) \space))
      (assoc board (dec (read-string move)) player)
      (do
        (println "Invalid move. Please enter a number between 1 and 9.")
        (get-move player board)))))

