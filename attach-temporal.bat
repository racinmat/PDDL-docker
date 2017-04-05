FOR /F "tokens=*" %%i IN ('docker ps -qf "ancestor=azathoth/pddl-temporal" ') DO SET TEMPORAL_ID=%%i
:: the line above executes the docker ps command and saves its result to variable. Fuck you, batch!
docker exec -it %TEMPORAL_ID% bash