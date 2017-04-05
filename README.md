# PDDL task - docker Images & FAQ

In this readme, I suggest you to create some simple scripts which helps you with handling the docker container or running the planners.  
All scripts presented are available this repository, so you can download them from here. 

## Installing docker images and running docker containers for PDDL solvers

This should work for every OS (Windows, Mac OS, Linux...)  
1. Download docker from [here](https://www.docker.com/community-edition#/download) and install it.  

### If you can run docker natively:
2. Check if the ports 5000 and 5001 is unused. If ports 5000 and 5001 are used, choose other free ports.  

#### For free ports 5000 and 5001:
3. Run download and run image with all **classical planners** by this command `docker run -p 5000:5000 -t azathoth/pddl`  
4. Run download and run image with **temporal planner** by this command `docker run -p 5001:5001 -t azathoth/pddl-temporal`  
5. Use address http://localhost:5000/[planner] as address of your local solver in the web editor.
Possible planners to use are [ff|siw|lama|mercury|probe|yahsp3|ms|lmcut|symba|metricff].  
6. Use address http://localhost:5001 as address of your local **temporal** solver in the web editor.

#### For other free ports:  
3. Run download and run image with all **classical planners** by this command `docker run -p [free port 1]:5000 -t azathoth/pddl`  
4. Run download and run image with **temporal planner** by this command `docker run -p [free port 2]:5001 -t azathoth/pddl-temporal`  
5. Use address http://localhost:[free port 1]/[planner] as address of your local solver in the web editor.
Possible planners to use are [ff|siw|lama|mercury|probe|yahsp3|ms|lmcut|symba|metricff].  
6. Use address http://localhost:[free fort 2] as address of your local **temporal** solver in the web editor.

Examples: 
 - For basic planner and port 5000, the address is http://localhost:5000/ff
 - For temporal planner and port 5001, the address is http://localhost:5001


### If you can run docker only via docker toolbox:
2. Find IP address of the docker which is shown when the docker console is started.
3. Check if the ports 5000 and 5001 is unused. If ports 5000 and 5001 are used, choose other free ports.  
4. Run download and run image with all **classical planners** by this command `docker run -p [free port 1]:5000 -t azathoth/pddl`
5. Run download and run image with **temporal planner** by this command `docker run -p [free port 2]:5001 -t azathoth/pddl-temporal`  
6. Use address http://[docker ip]:[free port 1]/[planner] as address of your local solver in the web editor.
7. Use address http://localhost:[free fort 2] as address of your local **temporal** solver in the web editor.
Possible planners to use are [ff|siw|lama|mercury|probe|yahsp3|ms|lmcut|symba|metricff].  
Examples: 
     - For docker ip 192.168.1.10, port 5000 and basic planner, the address is http://192.168.1.10:5000/ff
     - For docker ip 192.168.1.10, port 5001 and temporal planner, the address is http://192.168.1.10:5001

## Running solvers from command line
1.  Instead of running docker image by `docker run -p 5001:5001 -t azathoth/pddl-temporal`, use additional option `-v host_path:guest_path`.  
    Example: `docker run -p 5001:5001 -v "absolute_path_to_files:/opt/plan" -t azathoth/pddl-temporal`

    If you are using Windows and struggling with special characters, use following script:
    ```
    chcp 65001
    start docker run -p 5001:5001 -v "absolute_path_to_files_with_ěščřžýáíé:/opt/plan" -t azathoth/pddl-temporal
    ```
    Now you started container with mounted directory with domains and problems.  

2.  Now, you need to get to the container so you can run scripts there. To get to the container, you need to attach to it.
    Let's create a scripts which attaches us to running container, 
    we will have one script for attaching to container with classical solvers, and one script for attaching to container with temporal solver:
    Classical planners:
    - Windows:  
        - Create file `attach.bat` with content  
        ```
        FOR /F "tokens=*" %%i IN ('docker ps -qf "ancestor=azathoth/pddl" ') DO SET TEMPORAL_ID=%%i
        docker exec -it %TEMPORAL_ID% bash
        ```
    - Linux: 
        - Create file `attach.sh` with content  
        ```
        #!/bin/bash  
        docker exec -it $(docker ps -qf "ancestor=azathoth/pddl" ) bash
        ```

    Temporal planner:
    - Windows:  
        - Create file `attach-temporal.bat` with content  
        ```
        FOR /F "tokens=*" %%i IN ('docker ps -qf "ancestor=azathoth/pddl-temporal" ') DO SET TEMPORAL_ID=%%i
        docker exec -it %TEMPORAL_ID% bash
        ```
    - Linux: 
        - Create file `attach-temporal.sh` with content  
        ```
        #!/bin/bash  
        docker exec -it $(docker ps -qf "ancestor=azathoth/pddl-temporal" ) bash
        ```
        
    Then, you simply run the script and it mounts you to running container.

3.  Now, you are in bash in running linux container, so it behaves as ordinary linux OS.
    Run temporal solver by:  
    `cd ~/planners/temporal`  
    `./optic-clp -N /opt/plan/temporal/domain.pddl /opt/plan/temporal/p01.pddl`
    Other solvers can be found in directory `~/planners`

## Killing running container
Manually  
1. Type `docker ps`, this shows you running processes. At the end, you can see name of each running container. 
Name of container is always two words in snake case. For example `mystifying_shirley`.
2. Find name of container you want to kill.
3. Type `docker kill [name]`.  
For example: `docker kill mystifying_shirley`
  
Automatically, using scripts:  
Following scripts kill container with classical solvers:
- Windows:  
  - Create file `kill.bat` with content  
    ```
    FOR /F "tokens=*" %%i IN ('docker ps -qf "ancestor=azathoth/pddl" ') DO SET TEMPORAL_ID=%%i 
    docker kill %TEMPORAL_ID%
    ```
- Linux: 
  - Create file `kill.sh` with content  
    ```
    #!/bin/bash  
    docker stop $(docker ps -qf "ancestor=azathoth/pddl" )
    ```
 
Following scripts kill container with temporal solver:
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

#### I get Segmentation fault
You have too large problem, try to remove some objects from it to reduce it.

#### I can not run docker container, it says: `docker: Error response from daemon: driver failed programming external connectivity...`
Another container is already running on the same port. Firstly, you must kill current container. See [Killing running container](#killing-running-container)

#### Where do I get temporal planner output and how to visualize it?
1. In web editor, install Timeline Viewer by clicking `Plugins` and then `Install` in row with Timeline Viewer (obviously)
2. Copy output of temporal planner. To get it, click tab with plan and then `output`, copy the output.
3. Click tab with Timeline Viewer and paste the plan output there. It should immediately visualize the timeline of found plan.

#### Temporal solution looks weird, person leaves work before getting it done...
Check if `at start`, `at end` and `over all` are correctly used. 
Use predicated to "lock" people in some action.  
For example: predicate `not_working`can be used to check that people are not working when walking or boarding vehicles. 
You can have this predicate as precondition to these action, remove this predicate at start of work and add it at end of work. 

#### Solver does not tell me what is wrong
Try another solver. Different solvers are verbose for different kinds of errors.

#### Temporal solver runs too long
Try to set longer duration in frequent actions with short duration. Setting e.g. 0.3 instead of 0.1 to vehicle boarding action makes solving many times faster.

#### Optimal planners can not parse domain or problem file when run from command line
Probably your files start with BOM or have windows line endings.
 
To remove it, run this script **inside the docker container**:
```
#!/bin/bash

# this line removes BOM from all pddl files
find /opt/plan -name "*.pddl" | while read l; do sed -i '1 s/^\xef\xbb\xbf//'  $l; dos2unix $l; echo $l; done

```
In the script above, I assume you have your pddl files in directory `/opt/plan`
This script prints all pddl files it finds. If it does not print anything, it means it did not find any .pddl file.  
In that case, modify the script to find files in the location where you store them.

The whole script is in this repository, and you can see it [here](https://github.com/racinmat/PDDL-docker/blob/master/repair_files.sh)

#### How to run scripts from command line
In the template, scripts `plan` and `plan-all` are provided.
To use `plan`, go to directory where it is and then run it, in example case: 
```
cd /opt/plan
./plan ff simple p01 20m
./plan siw extended p01 20m
./plan metricff cost p02 20m
```

Note that siw and metricff also work, even when they are not listed in the help of plan script.
Plan-all runs all problems with particular planner.