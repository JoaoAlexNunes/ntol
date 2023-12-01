(ns hello-world.core
  (:gen-class))

#_{:clj-kondo/ignore [:unused-binding]}
((defn -main
  "I don't do a whole lot ... yet."
  [& args]
  (println "I'm a little teapot!")) -main)


