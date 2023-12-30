let routes =
  Dream.
    [
      get "/hello" (fun (_ : request) ->
          html @@ Restapi.greetings ^ "world! \n");
      get "/hello/:name" (fun request ->
          html @@ Restapi.greetings ^ Dream.param request "name" ^ "! \n");
    ]

let () = Dream.(run (router routes))
