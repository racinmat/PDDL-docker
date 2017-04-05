FOR /F "tokens=*" %%i IN ('docker ps -qf "ancestor=azathoth/pddl" ') DO SET CLASSICAL_ID=%%i
:: the line above executes the docker ps command and saves its result to variable. Fuck you, batch!
docker kill %CLASSICAL_ID%