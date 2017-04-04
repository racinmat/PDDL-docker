# PDDL task - docker Images & FAQ

## Installing docker images and running docker containers for PDDL solvers

This should work for every OS (Windows, Mac OS, Linux...)  
1. Download docker from [here](https://www.docker.com/community-edition#/download) and install it.  

### If you can run docker natively:
2. Check if the ports 5000 and 5001 is unused. If ports 5000 and 5001 are used, choose other free ports.  

#### For free ports 5000 and 5001:
3. Run download and run image with all **classical planners** by this command `docker run -p 500:5000 -t azathoth/pddl`  
4. Run download and run image with **temporal planner** by this command `docker run -p 5001:5001 -t azathoth/pddl-temporal`  
5. Check that both containers run and web servers work correctly by visiting addresses
    - http://localhost:5000/test  
    - http://localhost:5001/test
6. Use address http://localhost:5000/[planner] as address of your local solver in the web editor.
Possible planners to use are [ff|siw|lama|mercury|probe|yahsp3|ms|lmcut|symba].  
7. Use address http://localhost:5001 as address of your local **temporal** solver in the web editor.

#### For other free ports:  
3. Run download and run image with all **classical planners** by this command `docker run -p [free port 1]:5000 -t azathoth/pddl`  
4. Run download and run image with **temporal planner** by this command `docker run -p [free port 2]:5001 -t azathoth/pddl-temporal`  
5. Check that both containers run and web servers work correctly by visiting addresses
    - http://localhost:[free port 1]/test  
    - http://localhost:[free port 2]/test
6. Use address http://localhost:[free port 1]/[planner] as address of your local solver in the web editor.
Possible planners to use are [ff|siw|lama|mercury|probe|yahsp3|ms|lmcut|symba].  
7. Use address http://localhost:[free fort 2] as address of your local **temporal** solver in the web editor.

Examples: 
 - For basic planner and port 5000, the address is http://localhost:5000/ff
 - For temporal planner and port 5001, the address is http://localhost:5001


### If you can run docker only via docker toolbox:
2. Find IP address of the docker which is shown when the docker console is started.
3. Check if the ports 5000 and 5001 is unused. If ports 5000 and 5001 are used, choose other free ports.  
4. Run download and run image with all **classical planners** by this command `docker run -p [free port 1]:5000 -t azathoth/pddl`
5. Run download and run image with **temporal planner** by this command `docker run -p [free port 2]:5001 -t azathoth/pddl-temporal`  
6. Check that both containers run and web servers work correctly by visiting addresses
    - http://[docker ip]:[free port 1]/test  
    - http://[docker ip]:[free port 2]/test  
7. Use address http://[docker ip]:[free port 1]/[planner] as address of your local solver in the web editor.
8. Use address http://localhost:[free fort 2] as address of your local **temporal** solver in the web editor.
Possible planners to use are [ff|siw|lama|mercury|probe|yahsp3|ms|lmcut|symba].  
Examples: 
     - For docker ip 192.168.1.10, port 5000 and basic planner, the address is http://192.168.1.10:5000/ff
     - For docker ip 192.168.1.10, port 5001 and temporal planner, the address is http://192.168.1.10:5001

The test website of correctly running server should look like this:
![running server](https://raw.githubusercontent.com/racinmat/pddl-docker/master/test.png)

## Running solvers from command line
1.  Instead of running docker image by `docker run -p 5001:5001 -t azathoth/pddl-temporal`, use additional option `-v host_path:guest_path`.  
    Example: `docker run -p 5001:5001 -v "absolute_path_to_files:/opt/plan" -t azathoth/pddl-temporal`

    If you are using Windows and struggling with special characters, use following script:
    ```
    chcp 65001
    start docker run -p 5001:5001 -v "absolute_path_to_files_with_ěščřžýáíé:/opt/plan" -t azathoth/pddl-temporal
    ```
    Now you started container with mounted directory with domains and problems.  

2.  Now, open new cmd window and attach to running container, to use bash in this container.
    It is very convenient to create scripts for attaching to running container:
    - Windows:  
        - Create file `kill-temporal.bat` with content  
        ```
        FOR /F "tokens=*" %%i IN ('docker ps -qf "ancestor=azathoth/pddl-temporal" ') DO SET TEMPORAL_ID=%%i
        docker exec -it %TEMPORAL_ID% bash
        ```
    - Linux: 
        - Create file `kill-temporal.sh` with content  
        ```
        #!/bin/bash  
        docker exec -it $(docker ps -qf "ancestor=azathoth/pddl-temporal" ) bash
        ```
    When you run the script above, it mounts you to running container.

3.  Now, you are in bash in running linux container, so it behaves as ordinary linux OS.
    Run temporal solver by:  
    `cd ~/planners/temporal`  
    `./optic-clp -N /opt/plan/temporal/domain.pddl /opt/plan/temporal/p01.pddl`

## Killing running container
Manually  
1. Type `docker ps`, this shows you running processes. At the end, you can see name of each running container. 
Name of container is always two words in snake case. For example `mystifying_shirley`.
2. Find name of container you want to kill.
3. Type `docker kill [name]`.  Fo example: `docker kill mystifying_shirley`
  
Automatically, using script  
I will show that on script killing container with temporal solver.
- Windows:  
  - Create file `kill-temporal.bat` with content  
    ```
    FOR /F "tokens=*" %%i IN ('docker ps -qf "ancestor=azathoth/pddl-temporal" ') DO SET TEMPORAL_ID=%%i 
    docker kill %TEMPORAL_ID%
    ```
- Linux: 
  - Create file `kill-temporal.sh` with content  
    ```
    #!/bin/bash  
    docker stop $(docker ps -qf "ancestor=azathoth/pddl-temporal" )
    ```

## FAQ

#### Solver returns error code with no message
Run solver in command line, it is more verbose and tells you which row is wrong.

#### Temporal actions do not work
Use `:condition` instead of `:precondition` in `durative-action` definition.

### I get Segmentation fault in temporal solver
Now you are fucked. Doomed. The end.

### I can not run docker container, it says: `docker: Error response from daemon: driver failed programming external connectivity...`
Another container is already running on the same port. Firstly, you must kill current container. See [Killing running container](##Killing running container)
