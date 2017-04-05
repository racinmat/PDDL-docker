FOR /F "tokens=*" %%i IN ('docker ps -qf "ancestor=azathoth/pddl" ') DO SET SOLVERS_ID=%%i
:: the line above executes the docker ps command and saves its result to variable. Fuck you, batch!
docker exec -it %SOLVERS_ID% bash