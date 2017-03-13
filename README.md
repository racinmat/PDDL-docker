## Docker image for PDDL solvers

This should work for every OS (Windows, Mac OS, Linux...)  
1. Download docker from [here](https://www.docker.com/community-edition#/download) and install it.  

### If you can run docker natively:
2. Check if the port 5000 is unused. If port 5000 is used, pick any other free port.  
3. Run download and run image by this command `docker run -p [free port]:5000 -t azathoth/pddl`  
4. Check that the container runs and web server works correctly by visiting http://localhost:[free port]/test.  
5. Use address http://localhost:[free port]/[planner] as address of your local solver in the web editor.
Possible planners to use are [ff|siw|lama|mercury|probe|yahsp3|ms|lmcut|symba].  
Example: for basic planner and port 5000, the address is http://localhost:5000/ff

### If you can run docker only via docker toolbox:
2. Find IP address of the docker which is shown when the docker console is started.
3. Check if the port 5000 is unused. If port 5000 is used, pick any other free port.  
4. Run download and run image by this command `docker run -p [free port]:5000 -t azathoth/pddl`  
5. Check that the container runs and web server works correctly by visiting http://[docker ip]:[free port]/test  
6. Use address http://[docker ip]:[free port]/[planner] as address of your local solver in the web editor.
Possible planners to use are [ff|siw|lama|mercury|probe|yahsp3|ms|lmcut|symba].  
Example: for docker ip 192.168.1.10, port 5000 and basic planner, the address is http://192.168.1.10:5000/ff

The test website should look like this:
![running server](https://raw.githubusercontent.com/racinmat/pddl-docker/master/test.png)