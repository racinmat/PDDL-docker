## Docker image for PDDL solvers

This should work for every OS (Windows, Mac OS, Linux...)  
1. Download docker from [here](https://www.docker.com/community-edition#/download) and install it.  
2. Check if the port 5000 is unused. If port 5000 is used, pick any other free port.  
3. Run download and run image by this command `docker run -p [free port]:5000 -t azathoth/pddl`  
4. Check that the container runs and web server works correctly by visiting http://localhost:[free port]/test
5. Use address http://localhost:[free port]/planner as address of your local solver in the web editor.

